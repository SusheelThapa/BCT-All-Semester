!Do Loop
program Do_Loop
    implicit none
    INTEGER :: i

    ! Syntax:
    ! do int_var = start , stop,[step]
    !     statements
    !     statements
    !     ..........
    !     ..........
    !     ..........
    ! end do

    do i = 1, 5
        print *, "It's me FORTRAN"
    end do

    print *, "Number from 1 - 10"
    do i = 1, 10
        print *, i
    end do
    print *, "Number from 10 - 1"
    do i = 10, 1, -1
        print *, i
    end do

    print *, "Odd Number"
    do i = 1, 10, 2
        print *, i
    end do

    print *, "Even Number"
    do i = 2, 10, 2
        print *, i
    end do

end program Do_Loop
