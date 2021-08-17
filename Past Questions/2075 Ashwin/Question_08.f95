
program Susheel
    implicit none

    INTEGER :: matA(10), temp, i, j

    print *, "Write all ten interger one by one:"

    do i = 1, 10
        read *, matA(i)
    end do

    do i = 1, 10
        do j = 1, 10
            if (matA(i) .lt. matA(j)) then
                temp = matA(i)
                matA(i) = matA(j)
                matA(j) = temp
            end if
        end do
    end do

    print *, "Sorted Number"

    do i = 1, 10
        print'(I3)', matA(i)
    end do

end Program Susheel
