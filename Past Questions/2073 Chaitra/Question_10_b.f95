program Ascending
    implicit none
    INTEGER :: a(10), i, j

    do i = 1, 10
        read *, a(i)
    end do

    do i = 1, 10
        do j = 1, 10
            if (a(i) .gt. a(j)) then
                a(i) = a(i)*a(j); 
                a(j) = a(i)/a(j); 
                a(i) = a(i)/a(j); 
            end if
        end do
    end do

    do i = 1, 10
        print *, a(i)
    end do

end program Ascending
