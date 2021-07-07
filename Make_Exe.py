'''
I just created this program because I used to make c program then delete its .exe files as these are harmful.
Later in when i used to make report i again need to run all the c program files create .exe files and run eaach files. 
So i created this program that will generate me .exe files of all c program


Note:
    This python file and c programsfiles should be in same folder
    Folder should contain only .c files if other files/folder is present then it will through error.
    To run this file,

        You need to have python installed in your computer

        Execute the command:
            python Make_Exe.py 
   
'''


import os

list_of_c = os.listdir()

list_of_c.remove("Make_Exe.py")

for c_program in list_of_c:
    os.system(f'gcc {c_program} -o {c_program.replace(".c","")}')

