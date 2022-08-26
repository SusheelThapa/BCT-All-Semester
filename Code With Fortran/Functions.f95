!Function
program Functions
    implicit none

    INTEGER :: number_one, number_two
    INTEGER :: total

    write (*, *) "Enter a number?"
    read (*, *) number_one
    write (*, *) "Enter another number?"
    read (*, *) number_two

    print *, ""

    print *, "Sum of a and b is ", total(number_one, number_two)

end program Functions

!Function
INTEGER function total(a, b)
    implicit none
    !Declaration of a, b data type that is passed
    INTEGER :: a, b

    !TO return the value just put the return value in function name like below
    total = a + b

end function
