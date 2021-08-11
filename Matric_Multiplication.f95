!Matric Multiplication
program Intrinsic_FUnction
    implicit none

    INTEGER  :: i,j
    INTEGER,DIMENSION(2,2) :: matA,matB,matC

    
    data matA(1,:) /1,2/
    data matA(2,:) /2,1/
    
    matB = reshape((/5,6,7,8/),(/2,2/))
    
    matC = MATMUL(matA,matB)
    
    print*,"Matric Multiplication of MAtA and MAtb is"

    do i = 1, 2
        print*, (matC(i,j) ,j = 1,2 )
    end do

end program Intrinsic_FUnction