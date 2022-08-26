!QUADRARIC EQUATION SOLVING

program Quadratic_Root
    implicit none

    real :: a, b, c, discriminant, real_part, imaginary_part; 
    print *, "Enter the value of a , b and c?"
    READ *, a, b, c; 
    discriminant = b*b - 4*a*c

    print *, "Roots are"

    if (discriminant > 0) then

        real_part = -b/(2.0*a)
        imaginary_part = SQRT(discriminant)/(2.0*a)

        print '(f4.2,A2,f4.2,A5,f4.2,A2,f4.2)', real_part, "+", imaginary_part, " and ", real_part, "-", imaginary_part
    else if (discriminant == 0) then

        real_part = -b/(2.0*a)
        imaginary_part = SQRT(discriminant)/(2.0*a)

        print '(f4.2,A5,f4.2)', real_part, " and ", real_part

    else if (discriminant < 0) then

        real_part = -b/(2.0*a)
        imaginary_part = SQRT(-discriminant)/(2.0*a)

        print '(f5.2,A4,f5.2,A5,f4.2,A4,f4.2)', real_part, " + i", imaginary_part, " and ", real_part, " - i", imaginary_part

    end if

end program Quadratic_Root
