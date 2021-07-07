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


list_of_c = os.listdir()


for items in list_of_c:
    if items.endswith(".c"):

        os.system("cls")

        print(f"Copying the code of {items}...\n")
        time.sleep(2)
        with open(items, "r") as f:
            pyperclip.copy(f.read())

        print(f"Code of {items} is copied in your clipboard.\nUse Ctrl + v to copy it...")
        print("Press any key to run it...")

        a = input()

        os.system("cls")

        print(f"Compilation and Execution of {items}\n")
        time.sleep(2)
        os.system(
            f'gcc {items} -o {items.replace(".c","")}')
        os.system(f'.\\{items.replace(".c",".exe")}')

        print(f"\n\n{items} execution completed.")
        print("Take your screen shot...")
        print("Press any key to start execution of second program...")

        a = input()

        os.system("cls")

        print(f"Deleting the created {items}.exe file..\n")
        time.sleep(2)
        os.system(f'del {items.replace(".c","")}.exe')
        
        print(f"{items}.exe is deleted...")
        print("Press any key to continue...")

        a = input()

