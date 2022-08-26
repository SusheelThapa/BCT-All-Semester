!Print odd and even number from 1 to 10
program Odd_Even
    implicit none

    INTEGER :: i

    print *, "Even", " Odd"

    do i = 1, 99, 2
        print'(2I4)', i+1, i
    end do

end program Odd_Even
