'''
    "ENOUGH IS ENOUGH"

    Now, I am not going to just running .exe files to run by compiled c program

    From today i gave this task to by python buddy
 
Note:
    This python file and compiled programs files should be in same folder
    To run this file,

        You need to have python installed in your computer

        Execute the command:
            python Run_Exe.py 

'''

import os
import time

cwd_files_folders = os.listdir()

for item in cwd_files_folders:
    os.system("cls")
    if item.endswith(".exe"):
        print(f"{item} is executing.")
        time.sleep(2)

        os.system(f".\\{item}")

        print(f"\n{item} execution completed.")
        print("Take your screen shot...")
        print("Press any key to start execution of second program...")
        a = input()

print("All program executed..")
print("Good to go...")
