'''
After creating .exe files it will be very hard to delete all exe at once so I have created this python program to delete all the .exe present on the folder

Note:
    This python file and .exe files should be in same folder
    Folder should contain only .exe files and .c files will be filtered out if other files/folder is present then it may throw error.
    To run this file,

        You need to have python installed in your computer

        Execute the command:
            python Delete_Exe.py 
'''

import os

cwd_files_folders = os.listdir()

for item in cwd_files_folders:
    if item.endswith(".exe"):
        os.system(f"del {item}")
