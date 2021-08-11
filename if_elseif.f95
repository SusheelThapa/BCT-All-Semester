!If elseif else
program If_ELseIf
    implicit none

    real :: mark

    mark = 60

    if (mark<40)then 
        print*, "You are fail"

    else if(mark ==40) then 
        print*, "Just Passed"

    else if(mark==60) then
        print * , "Satisfactory"
    
    else if(mark==80) then
        print * , "Very good"

    else if(mark==100) then
        print * , "No words, You have full marks."
    else 
        print * ,"Doesn't match to above condition"

    endif
end program If_ELseIf