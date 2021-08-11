!Taking input from user
program Take_Input
    implicit none
    INTEGER :: number

    !We use read () to take value from user
    !Syntax:
        !read(*,*),<variable name>

    WRITE(*,*)"Enter any number?"
    READ(*,*) number
    print*,"The inputted number is ", number

end program Take_Input