import linecache
import sys
import xlsxwriter

try:
    log_file = sys.argv[1]
    create_xlsx_file = sys.argv[2]
except IndexError:
    print("Usage: python3 LogAnalysis.py Analysis_log_file generate_analysis_file.xlsx")
    exit(1)

# log_file = "ubt_c1-c6_8d209_l1_mlog_stats.txt"

# 创建工作薄 workbook('demo.xlsx')
workbook = xlsxwriter.Workbook(create_xlsx_file)
# 创建工作表
worksheet = workbook.add_worksheet()
# 设置一列或者多列单元属性
worksheet.set_column('A:A', 21.9)
worksheet.set_row(0, 42.5)
worksheet.set_row(17, 42.5)

# 单元格样式数据
small_yellow = workbook.add_format({
    'bold': 1,  # 字体加粗
    # 'fg_color': 'green',  # 单元格背景颜色
}).set_text_wrap()

big_yellow = workbook.add_format({
    'bold': 1,  # 字体加粗
    # 'fg_color': 'yellow',  # 单元格背景颜色
})

big_yellow.set_text_wrap()  # 设置文本可=可以跨行显示
big_yellow.set_font_name("Tahoma")  # 设置字体主题

# 在工作表中创建一个新的格式对象来格式化单元格，实现加粗
bold = workbook.add_format({
    'bold': True,
    # "fg_color": "red"
})
bold.set_font_name("Tahoma")
bold.set_text_wrap()

# 设置百分比类型文本样式
percentage_format = workbook.add_format()
percentage_format.set_text_wrap("Tahoma")
percentage_format.set_align("center")
percentage_format.set_align("vcenter")

# 设置浮点数类型文本样式
num_format = workbook.add_format()
num_format.set_text_wrap('Tahoma')
num_format.set_align("center")
num_format.set_valign("vcenter")


def processing_latency(fd_num, name, log_line):
    """
    处理延迟
    :param fd_num: 延迟FD数值
    :param name: 延迟模块名称
    :param log_line: 延迟数据所在的行号
    :return: {name: {"Min": Min, "Avg": Avg, "Max": Max}, "fd_num": fd_num}
    """
    latency = linecache.getline(log_file, log_line)
    Min = f'{float(latency.strip(" ").split()[6]) / 500:.0%}'
    Avg = f'{float(latency.strip(" ").split()[7]) / 500:.0%}'
    Max = f'{float(latency.strip(" ").split()[8]) / 500:.0%}'
    dic = {name: {"Min": Min, "Avg": Avg, "Max": Max}, "fd_num": fd_num}
    return dic


def break_down(fd_num, start_line, end_line):
    """
    High Level Break Down per Cell (in usecs)
    :param fd_num: Test Number
    :param start_line:
    :param end_line:
    :return: {"fullname": {"k":"v"}}
    """
    fullname = "fd_" + str(fd_num)
    dic = {fullname: {}}
    for line_num in range(start_line, end_line + 1):
        line = linecache.getline(log_file, line_num)
        k = line.strip().split(":")[0].strip().replace(' ', '_')
        v = line.strip().split(":")[1].strip()
        dic[fullname][k] = v

    return dic


def vice_title(row_line, sum_column_line, order_list_data, text_format):
    # 按照坐标写入副标题数据
    row_line -= 1
    for line in range(int(sum_column_line)):
        worksheet.write(row_line, line, order_list_data[line], text_format)


def main_title(work_list):
    # 按照坐标写入主标题数据
    work_list.merge_range('B1:D1', 'Processing Latency - Avg across all Cells (% of TTI)', big_yellow)  # 合并单元格(0,234)
    work_list.write(0, 0, "Processing Latency - Avg across all Cells (% of TTI)", big_yellow)
    work_list.merge_range('B18:D18', 'High Level Break Down per Cell (in usecs)', big_yellow)  # 合并单元格(18,234)
    work_list.write(17, 0, "High Level Break Down per Cell (in usecs)", big_yellow)


def insert_plain_column(start_row, start_column, order_list_data, text_format):
    start_column -= 1
    start_row -= 1
    data_list = []
    for i in order_list_data:
        data_list.append("Min " + i)
        data_list.append("Avg " + i)
        data_list.append("Max " + i)
    for i in data_list:
        worksheet.write(start_row, start_column, i, text_format)
        start_row += 1


def insert_data_column(start_row, start_column, order_list_data, start_data_line, fd, text_format, interval):
    start_row -= 1
    start_column -= 1
    for name in order_list_data:
        worksheet.write(start_row, start_column, processing_latency(fd, name, start_data_line)[name]["Min"],
                        text_format)
        start_row += 1
        worksheet.write(start_row, start_column, processing_latency(fd, name, start_data_line)[name]["Avg"],
                        text_format)
        start_row += 1
        worksheet.write(start_row, start_column, processing_latency(fd, name, start_data_line)[name]["Max"],
                        text_format)
        start_row += 1
        start_data_line += interval


# High Level Break Down per Cell
daemon = {
    'fd_1300': {'DL_CONTROL': '35.81', 'PDSCH': '238.77', 'PDSCH_FEC': '31.50', 'PUSCH_FEC': '31.24', 'PUSCH': '563.34',
                'PUCCH': '270.09', 'PRACH': '18.76', 'SRS': '0.00', 'DL_BEAM': '0.00', 'UL_BEAM': '0.00',
                'MAC-PHY_API': '35.74', 'OTHERS': '19.03'}}

test_dic = {"19": "DL_CONTROL", "20": "PDSCH", "21": "PDSCH_FEC", "22": "PUSCH_FEC", "23": "PUSCH", '24': 'PUCCH',
            "25": 'PRACH', "26": 'SRS', "27": "DL_BEAM", '28': 'UL_BEAM', "29": 'MAC-PHY_API', "30": 'OTHERS', }


def high_level_break_down(start_line=None, end_line=None, fd_num=None):
    if not fd_num:
        for i in range(19, 31):
            worksheet.write(i, 0, test_dic[str(i)], bold)
        return

    if str(fd_num) == "1300":
        fd_data = break_down(fd_num, start_line, end_line)
        for i in range(19, 31):
            worksheet.write(i, 1, fd_data["fd_1300"][test_dic[str(i)]], num_format)
        return

    if str(fd_num) == "2300":
        fd_data = break_down(fd_num, start_line, end_line)
        for i in range(19, 31):
            worksheet.write(i, 2, fd_data["fd_2300"][test_dic[str(i)]], num_format)
        return

    if str(fd_num) == "4300":
        fd_data = break_down(fd_num, start_line, end_line)
        for i in range(19, 31):
            worksheet.write(i, 3, fd_data["fd_4300"][test_dic[str(i)]], num_format)
        return


if __name__ == '__main__':
    # 插入主标题数据
    main_title(worksheet)
    # 插入副标题数据1
    order_data_list = ["Test Number", "FD 1300", "FD 2300", "FD 4300"]
    vice_title(2, 4, order_data_list, bold)
    # 插入副标题数据2
    order_data_list = ["Test Number", "FD 1300", "FD 2300", "FD 4300"]
    vice_title(19, 4, order_data_list, bold)
    # 插入fd数据列
    order_data_list = ["DL Processing Latency", "UL Processing Latency", "SRS Processing Latency",
                       "DL FEC Link Latency", "UL FEC Link Latency"]
    insert_plain_column(3, 1, order_data_list, bold)
    # 插入fd1300百分比数据
    order_data_list = ["DL_Processing_Latency", "UL_Processing_Latency", "SRS_Processing_Latency",
                       "DL_FEC_Link_Latency", "UL_FEC_Link_Latency"]
    insert_data_column(3, 2, order_data_list, 126, 1300, percentage_format, 2)
    # 插入fd2300百分比的数据
    insert_data_column(3, 3, order_data_list, 1405, 2300, percentage_format, 3)
    # 插入fd4300百分比的数据
    insert_data_column(3, 4, order_data_list, 3180, 4300, percentage_format, 5)
    # 插入high_level_break_down数据名称列
    high_level_break_down(fd_num=None)
    # 插入high_level_break_down数据fd1300的值
    high_level_break_down(fd_num=1300, start_line=16, end_line=27)
    # 插入high_level_break_down数据fd2300的值
    high_level_break_down(fd_num=2300, start_line=1249, end_line=1260)
    # 插入high_level_break_down数据fd4300的值
    high_level_break_down(fd_num=4300, start_line=2932, end_line=2943)
    # 关闭工作薄
    workbook.close()
    print("日志文件分析完毕！ 分析结果请查看excel文件： %s" % create_xlsx_file)
