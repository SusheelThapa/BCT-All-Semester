
program Select_Case
    implicit none
    INTEGER :: day
    INTEGER :: number

    ! Syntax:
    ! select case (expression, variable)
    ! case(1)
    ! statement
    ! case(2)
    ! statement
    ! case(3)
    ! statement
    ! case(4)
    ! statement
    ! case(5)
    ! statement
    ! case(6)
    ! statement
    ! case(7)
    ! statement
    !
    ! end select

    day = 2

    select case (day)
    case (1)
        print *, "Sunday"
    case (2)
        print *, "Monday"
    case (3)
        print *, "Tuesday"
    case (4)
        print *, "Wednesday"
    case (5)
        print *, "Thursday"
    case (6)
        print *, "Friday"
    case (7)
        print *, "Saturday"
    case default
        print *, "Doesn't exist the provided day"

    end select

    number = 23

    ! 1: 5 mean {1,2,3,4,5}

    select case (number)
    case (1:10)
        print *, "Value of x lies in between 1 and 10"
    case (11:20)
        print *, "Value of x lies in between 11 and 20"
    case (21:30)
        print *, "Value of x lies in between 21 and 30"
    case (31:40)
        print *, "Value of x lies in between 31 and 40"
    case (41:)
        print *, "Value of s is greater than 41"
    end select

    !logical select case
    select case (10 == 10)
    case (.true.)
        print *, "True condtion"
    case (.false.)
        print *, "False condtion"
    end select

end program Select_Case
