program Greatest
    implicit none
    INTEGER :: number_one, number_two

    print *, "Number one:"
    read *, number_one
    print *, "Number Two"
    read *, number_two

    if (number_one > number_two) then
        print'(I3,A20)', number_one, "is greatest number."
    Else
        print'(I3,A20)', number_two, "is greatest number."
    end if
end program Greatest
