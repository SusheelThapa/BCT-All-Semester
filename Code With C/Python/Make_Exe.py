'''
I just created this program because I used to make c program then delete its .exe files as these are harmful.
Later in when i used to make report i again need to run all the c program files create .exe files and run each files. 
So i created this program that will generate me .exe files of all c program


Note:
    This python file and c programsfiles should be in same folder
    Folder should contain only .c files if other files/folder is present then it may throw error.
    To run this file,

        You need to have python installed in your computer

        Execute the command:
            python Make_Exe.py 
   
'''


import os

cwd_files_folders = os.listdir()

for item in cwd_files_folders:
    if item.endswith(".c"):
        os.system(f'gcc {item} -o {item.replace(".c","")}')
