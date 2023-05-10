from flask import Flask
from flask import request, redirect, render_template, send_file
import os
import time

# app = Flask(__name__, static_folder='./data', static_url_path='/data')
app = Flask(__name__, template_folder='templates', static_folder='static', static_url_path='/static')
DIRECTORY_PATH = os.path.dirname(os.path.realpath(__file__))
DATA_PATH = DIRECTORY_PATH + "/data/"
machines = []
for i in os.listdir(DATA_PATH):
    machines.append(i)

def get_files(path, url, type):
    files = []
    global server_info
    if type == "index":
        for i in os.listdir(path):
            file_path = path + i
            url = url
            name = i
            ctime = time.localtime(os.path.getctime(file_path))
            server_info = file_path + "/server_info"
            CPU_type = get_value(server_info, 0)
            OS = get_value(server_info, 1)
            kernel = get_value(server_info, 2)
            if name != "server_info" and ".sh" not in name:
                files.append({
                    "path": url,
                    "name": name,
                    "ctime": "{}/{}/{}".format(ctime.tm_mday, ctime.tm_mon, ctime.tm_year),
                    "CPU": CPU_type,
                    "OS": OS,
                    "Kernel": kernel,
                })
    elif type == "files":
        for i in os.listdir(path):
            file_path = path + i
            url = url
            name = i
            ctime = time.localtime(os.path.getctime(file_path))
            if os.path.isfile(file_path) and i == "server_info":
                server_info = file_path
            elif os.path.isdir(file_path):
                temp_str = url.split("/")
                if len(temp_str) <= 1:
                    server_info = file_path + "/server_info"
                elif len(temp_str) == 2:
                    server_info = file_path + "/../server_info"
                elif len(temp_str) == 3:
                    server_info = file_path + "/../../server_info"
            CPU_type = get_value(server_info, 0)
            OS = get_value(server_info, 1)
            kernel = get_value(server_info, 2)
            if name != "server_info" and ".sh" not in name and ".js" not in name and ".css" not in name and ".png" not in name and ".svg" not in name:
                files.append({
                    "path": url,
                    "name": name,
                    "ctime": "{}/{}/{}".format(ctime.tm_mday, ctime.tm_mon, ctime.tm_year),
                    "CPU": CPU_type,
                    "OS": OS,
                    "Kernel": kernel,
                })
    return files

def get_value(path, index):
    file_path = path
    index = index
    with open(file_path, 'r') as cfile:
        data = cfile.readlines()
    if index >= len(data):
        return ""
    else:
        return data[index].split(":")[1].replace("\n", "")
    
@app.route('/')
def get_index():
    return render_template('index.html', machines=machines, files=get_files(DATA_PATH, '', "index"))


@app.route('/file/<path:filename>')
def read_file(filename):
    file_path = DATA_PATH + filename
    if os.path.isfile(file_path) and ".txt" in file_path:
        with open(file_path, 'r') as cfile:
            data = cfile.read()
        return render_template('txt.html', text=data)
    elif os.path.isfile(file_path) and ".txt" not in file_path:
        return send_file(file_path) 
    elif os.path.isdir(file_path):
        file_path += '/'
        url = request.path.replace('/file/', '')
        print(url)
        return render_template('file.html', machines=machines, files=get_files(file_path, url, "files"))


if __name__ == '__main__':
    app.debug = True
    app.run('0.0.0.0')
