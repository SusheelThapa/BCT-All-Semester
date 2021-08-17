!Factorial of number

program Factorial
    implicit none

    INTEGER :: number, i
    INTEGER :: fact = 1

    print *, "Enter the number whose factorial is to be calculted"
    read *, number

    do i = number, 1, -1

        fact = fact*i

    end do

    print '(A13,I4)', "Factorial is ", fact

end program Factorial
