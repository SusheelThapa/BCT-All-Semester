'''
    ......... IS MOTHER OF INVENTION

    Here is more powerful python program capable of:
        ~Copying Code
        ~Making and running .exe files
        ~Deleting created .exe files 

Note:
    This python file and programs files should be in same folder
    To run this file,

        You need to have python installed in your computer
        And install pyperclip by executing command:

            pip install pyperclip

        Execute the command:

            python Make_Copy_Run_Delete.py
'''

import os
import time
import pyperclip

cwd_files_folders = os.listdir()

for item in cwd_files_folders:
    if item.endswith(".c"):
        os.system("cls")

        print(f"Copying the code of {item}...\n")
        time.sleep(2)
        with open(item, "r") as f:
            pyperclip.copy(f.read())

        print(
            f"Code of {item} is copied in your clipboard.\nUse Ctrl + v to paste it...")
        print("Press any key make the executable file...")

        a = input()

        os.system("cls")

        print(f"Compilation and Execution of {item}\n")
        time.sleep(2)
        os.system(
            f'gcc {item} -o {item.replace(".c","")}')
        os.system(f'.\\{item.replace(".c",".exe")}')

        print(f"\n\n{item} execution completed.")
        print("Take your screen shot...")
        print("Press any key to start execution of second program...")

        a = input()

        os.system("cls")

        print(f"Deleting the created {item}.exe file..\n")
        time.sleep(2)
        os.system(f'del {item.replace(".c",".exe")}')

        print(f"{item.replace(".c", ".exe")} is deleted...")
        print("Press any key to continue...")

        a = input()
