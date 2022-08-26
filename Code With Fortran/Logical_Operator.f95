!Logical operator

program Logical_operator
    implicit none
    ! .and. .or. .not. are the used logical operator in fortran

    ! Built in
    ! .true. == T
    ! .false. == F

    print *, "True and False = ", .true. .and. .false.
    print *, "True or False = ", .true. .or. .false.
    print *, "Not of True = ",.not. (.true.)

end program Logical_operator
