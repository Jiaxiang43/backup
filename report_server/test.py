import os

def get_value(path, index):
    file_path = path
    index = index
    with open(file_path, 'r') as cfile:
        data = cfile.readlines()
    if index >= len(data):
        return ""
    else:
        return data[index].split(":")[1].replace("\n", "")
# CPU = data.split("\n")[0].split(":")[1]

if __name__ == '__main__':
    data = get_value("server_info.txt", 3)
    print(data)