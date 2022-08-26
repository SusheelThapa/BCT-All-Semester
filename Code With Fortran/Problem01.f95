!Find the midpoint of (2,4) & (4,-10)
program Midpoint
    implicit none

    !Variable Declaration
    real :: a,b,c,d

    !Reading Date
    WRITE(*,*)"Enter the coordinate of A?"
    READ(*,*) a,b

    WRITE(*,*)"Enter the coordinate of B?"
    READ(*,*) c,d

    !Printing using Format
    print'("The midpoint of A and B is (",f5.2,",",f5.2,")")',(a+c)/2,(b+d)/2.0
    
end program Midpoint