
program Print_Write
    implicit none

    ! Print is used to display any thing in the screen
    PRINT* , "Hello World"
    PRINT* , "I have 65 apples."

    ! For text use double quote and single for single character
    PRINT * , 'i'
    PRINT * , "34" ! Here 34 is text not number

    !Write inly number to display number in screen
    PRINT * , 34 ! Here 34 is number
    PRINT * , 45.654

    PRINT*, "Welcome Again"


    ! Next Way to pirnt in screen
        WRITE(*,*) "Using WRITE"
        !WRITE(*,*) <things to print in screen>
        WRITE(*,*) "Sushee"
    
    
    !Write is mosty used for formatting so for simple display use print
end program Print_Write

