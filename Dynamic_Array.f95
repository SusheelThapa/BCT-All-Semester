!Dynamic Array
program Dynamic_Array
    implicit none

    INTEGER :: i,j
    INTEGER :: rows, columns
    INTEGER,DIMENSION(:,:),ALLOCATABLE :: array

    ! !Note:
        !DIMENSION(:,:)           -->Two dimension
        !DIMENSION(:,:,:)         -->Three dimension
        !DIMENSION(:,:,:,:)       -->Four dimension
        !DIMENSION(:,:,:,:,:)     -->Five dimension
        !DIMENSION(:,:,:,:,:,:)   -->Six dimension
        !DIMENSION(:,:,:,:,:,:,:) -->Seven dimension

        !In fortran, we can create upto 7 d array
        !ALLOCATABLE is important to make it dynamic array

    !Taking rows and column from user
    write(*,*) "Rows of matrix"
    read(*,*)rows
    write(*,*) "Columns of matrix"
    read(*,*)columns

    ALLOCATE(array(rows,columns))  !This will allocate the size of matrix
    
    !Assigning Value with a(ij) = i+j
    do i =1,rows
        do j = 1,columns
            array(i,j) = i+j
        end do
    enddo

    !Printing array
    Print*, "Array:"
    do i =1,rows
        print *,(array(i,j), j = 1,columns)
    enddo

    DEALLOCATE(array) !Deallocating as it take memory
    
end program Dynamic_Array