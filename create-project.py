import os
import subprocess
import shutil

def create_project(project_name):
    print("Creating project " + project_name + "...");

    print("Copying template folder ...")
    shutil.copytree(".template", project_name)

    fin = open(project_name + "/CMakeLists.txt", "rt")
    data = fin.read()
    data = data.replace('-TEMPLATE', project_name)
    fin.close()

    fin = open(project_name + "/CMakeLists.txt", "wt")
    fin.write(data)
    fin.close()

    subprocess.call(['code', project_name])

def main():
    project_name = input("Choose a name for the project : ")
    create_project(project_name)

if __name__ == "__main__":
    main()