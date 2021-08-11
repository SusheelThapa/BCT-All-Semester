!Exit and Cycle
program Exit_Cycle
    implicit none
    INTEGER ::a = 10

    ! Exit is same as break in C 
    ! Cycle is same as continue in c

    print*,"Exit do while loop when a si 15"
    do a = 10, 20
        print * , a
        if (a.eq.15) then
            exit 
        endif
    end do

    print*,"Skip loop when loop when a is 15"
    do a =10,20
        if (a.eq.15) then
         CYCLE 
        endif
        print * , a
    end do

    print*,"Note: 15 is not printed."
    print *,"After if statment if just skip all the line below it and iterate over next value of a"

end program Exit_Cycle