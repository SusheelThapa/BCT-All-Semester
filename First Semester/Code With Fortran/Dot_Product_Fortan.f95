!Dot Product
program Dot_Product_Fortan
    implicit none

    real, DIMENSION(2) :: a, b

    a = (/1, 2/)
    b = (/3, 4/)

    print *, "Dot product of a and b is", dot_product(a, b)
    print *, ""

end program Dot_Product_Fortan
