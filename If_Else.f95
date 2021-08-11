!decision control using if 
program name
    implicit none
    INTEGER :: a ,b
    ! Syntax:
        ! if(condition) then
            ! statement
            ! statement
            ! statement
            !.
            !.
            !.
        !else   
            !statement
            !statement
            !statement
            !.
            !.
            !.
        !endif

    if(.true.) then 
        print*, "It is true statement"
    endif

    a = 5
    b = 4 

    if(a.gt.b) then 
        print*, "a is greater than b"
    else
        print * ,"a is less than b"
    endif

end program name
