! Range
program Range
    implicit none

    INTEGER :: var !integer variable of 4byte
    INTEGER(kind = 8) :: var8 !Make integer varaible of *byte

    ! huge will give the max limit of value that can be stored in var
    print*,huge(var) 
    print*,huge(var8)



end program Range