
program Relational_Operation
    implicit none
    real :: a = 4.0, b = 2.0

    !Method One
    print *, "a ==b ::", a == b
    print *, "a > b ::", a > b
    print *, "a >= b :: ", a >= b
    print *, "a < b ::", a < b
    print *, "a <= b :: ", a <= b
    print *, "a /n b :: ", a /= b

    !Method Two
    print *, "a ==b :: ", a .eq. b
    print *, "a > b :: ", a .gt. b
    print *, "a >= b :: ", a .ge. b
    print *, "a < b :: ", a .lt. b
    print *, "a <= b :: ", a .lt. b
    print *, "a /n b :: ", a .ne. b

end program Relational_Operation
