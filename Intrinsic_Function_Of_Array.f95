!Intrinsic_Function_Of_Array
program Intrinsic_Function_Of_Array
    implicit none
    
    INTEGER :: i,j
    INTEGER :: a(5) , mat(3,4)

    a = (/10,50,64,75,23/)

    mat  = reshape((/1,2,3,4,5,6,7,8,9,10,11,12/),(/3,4/))

    print* ,"One Dimension Matrices"
    do i =1,5
        print*,a(i)
    enddo

    print*,""
    
    print* ,"Two Dimension Matrices"
    do i = 1, 3
        print *, (mat(i,j), j = 1,4)
    end do

    print*,""
    
    print*,"The shape of a is " ,shape(a)
    print*,"The shape of mat is " ,shape(mat)
    
    print*,""

    print*,"The size of a is ", size(a)
    print*,"The size of mat is ", size(mat)
    
    print*,""
    
    print*,"The rank of a is ", rank(a)
    print*,"The rank of mat is ", rank(mat)
    
    print*,""

    print*,"The sum of all element of a is ", sum(a)
    print*,"The sum of all element of mat is ", sum(mat)

    print*,""

    print*,"The sum of all element of a greater than 40 is ", sum(a,a>40)
    print*,"The sum of all element of mat less than 6 is ", sum(mat, mat<6)
    
    print*,""

    print*,"The product of all element of a is ", product(a)
    print*,"The product of all element of mat is ", product(mat)

    print*,""

    print*,"The product of all element of a greater than 40 is ", product(a,a>40)
    print*,"The product of all element of mat less than 6 is ", product(mat, mat<6)

       
    print*,""

    print*,"Number of element in a greater than 40 is ", count(a>40)
    print*,"Number of element in mat less than 6 is ", count(mat < 6)

       
    print*,""

    print*,"Maximum value in a is ", MAXVAL(a)
    print*,"Maximum value in mat is ", MAXVAL(mat)

       
    print*,""

    print*,"Minimum value in a is ", MINVAL(a)
    print*,"Minimum value in mat is ",MINVAL(mat)

       
    print*,""

    print*,"Is all value in a is greater than 40: ", all(a>40)
    print*,"Is all value in mat is less than 20: ", all(mat<20)
       
    print*,""

    print*,"Is any value in a is less than 40: ", any(a<40)
    print*,"Is any value in mat is greater than 20: ", any(mat>20)


end program Intrinsic_Function_Of_Array