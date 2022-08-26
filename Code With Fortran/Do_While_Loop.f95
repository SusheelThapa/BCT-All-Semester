
program Do_While_Loop
    implicit none
    INTEGER :: a
    a = 1

    !Syntax:
    ! do while(condition)
    !     statements
    !     ..........
    !     ..........
    !     ..........
    !     ..........
    ! end do

    print *, "Number from 1 to 10"
    ! .le. mean less than or equal to
    do while (a .le. 10)
        print *, a
        a = a + 1
    end do

end program Do_While_Loop
