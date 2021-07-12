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

list = os.listdir()

for items in list:
    os.system("cls")
    if items.endswith(".exe"):
        print(f"{items} is executing.")
        time.sleep(2)
        os.system(f".\\{items}")
        print(f"\n{items} execution completed.")
        print("Take your screen shot...")
        print("Press any key to start execution of second program...")
        a = input()
        
print("All program executed..")
print("Good to go...")
