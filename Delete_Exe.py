'''
After creating .exe files it will be very hard to delete all exe at once so I have created this python program to delete all the .exe present on the folder

Note:
    This python file and .exe files should be in same folder
    Folder should contain only .exe files and .c files will be filtered out if other files/folder is present then it may through error.
    To run this file,

        You need to have python installed in your computer

        Execute the command:
            python Make_Exe.py 
'''

import os

list = os.listdir()

# list.remove("Delete_Exe.py")

for items in list:
    if items.endswith(".exe"):
       os.system(f"del {items}")
    


