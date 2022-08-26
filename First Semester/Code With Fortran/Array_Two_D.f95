!Array Two Dimension

program Array_Two_D
    implicit none
    INTEGER :: i, j
    INTEGER :: matA(2, 2) !Matrix of  2 X 2
    INTEGER :: matB(2, 3) !Matrix of  2 X 3

    !Assigning value to 2 D Array
    matA(1, 1) = 1
    matA(1, 2) = 2
    matA(2, 1) = 3
    matA(2, 2) = 4

    !Next method of assigning
    matB = reshape((/100, 200, 300, 400, 500, 600/), (/2, 3/))

    !Printing value of Two D array
    print *, "Method One MATRIX A"
    do i = 1, 2
        do j = 1, 2
            print *, matA(i, j)
        end do
    end do

    !Next way of printing 2 d array
    print *, "Method Two MATRIX B"
    do i = 1, 2
        print *, (matB(i, j), j=1, 3)
    end do

end program Array_Two_D
