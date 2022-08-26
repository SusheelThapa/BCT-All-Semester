program SubtractTwoMatrices
    implicit none

    INTEGER::matA(3), matB(3), matAns(3), i

    print *, "Matrix A"
    do i = 1, 3
        read *, matA(i)
    end do

    print *, "Matrix B"
    do i = 1, 3
        read *, matB(i)
    end do

!Calculation of matAns
    do i = 1, 3
        matAns(i) = matA(i) - matB(i)
    end do

    print *, "Matrix Ans"
    print *, (matAns(i), i=1, 3)
end program SubtractTwoMatrices
