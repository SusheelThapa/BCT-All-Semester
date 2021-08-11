!Data and Where
program Data_Where
    implicit none
    
    INTEGER ,DIMENSION(5):: array_one_d
    INTEGER ,DIMENSION(4,4):: array_two_d
    INTEGER :: i , j

    data array_one_d /1,2,3,4,5/

    data array_two_d(1,:) /1,2,3,4/
    data array_two_d(2,:) /5,6,7,8/
    data array_two_d(3,:) /9,10,11,12/
    data array_two_d(4,:) /13,14,15,16/

    !Note:
        ! array_two_d(1,:) 

            ! before comma represent rows and after comma represent columns
            ! 1, --> first row
            ! : --> all collumns
            ! array_two_d(1,:) --> one row ko all column

        ! Similarly,
            ! array_two_d(2,:) --> second row ko all column


    !Array one Dimension
    print*,"One Dimension"
    do i = 1, 5
        print* ,array_one_d(i)
    end do
    
    !Array two Dimension
    print*,"Two Dimension"
    do i = 1, 4
        print* ,(array_two_d(i,j) , j = 1,4)
    end do
    
    !where is just used to compare all value of matrix at once

    where (array_two_d<10)
        array_two_d = 0
    else where 
        array_two_d = 1
    end where

    print*,"Result after comparing all value of matrix with 10"
    
    do i = 1, 4
        print* ,(array_two_d(i,j) , j = 1,4)
    end do
    
    print*, "0 mean less than 10 and 1 mean greater than or equal to 10"

end program Data_Where