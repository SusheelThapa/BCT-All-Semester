!Array

program Array
    implicit none

    !Declaration of Array
    INTEGER,DIMENSION(6) :: a
    INTEGER :: b(6)
    INTEGER,DIMENSION(3:10) :: c ! Start index from 3 and end in 10
    INTEGER :: i

    
    !Assigning value --> index start from 1
    a(1)= 10
    a(2)= 4
    a(3)= 20
    a(4:)= 90 !From index 4 to last value will be assigned to 90

    !Another way of assigning value
    b = (/10,4,61,12,12,12/)

    c(3:6) = 89
    c(6:) = 67
    
    !Printing value
    print*,"Array A"
    do i =1,6
        print*,a(i)
    enddo
    
    print*,"Array B"
    do i =1,6
        print*,b(i)
    enddo

    print*,"Array c"
    do i =3,10
        print*,c(i)
    enddo

    print* ,"c(1) will gives garbage value"
    print*,"C(1) = ", c(1)

end program Array