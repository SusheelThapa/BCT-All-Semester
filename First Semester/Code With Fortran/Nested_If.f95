
program Nested_If
    implicit none
    integer :: x

    x = 8

    if (x >= 10) then
        if (x >= 15) then
            print *, "X is greater than or equal to 15"
        else
            print *, "X is less than 15 and greater than ten"
        end if
    else
        print *, "X is less than 10"
    end if

end program Nested_If
