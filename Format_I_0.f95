! input and output in FORTRAN
program Format_I_O
    implicit none

    REAL :: value = 13.32342
    REAL :: f_format = 56.243591034
    INTEGER :: i_format = 455
    logical :: l_format = .true.
    CHARACTER (len =20) :: a_format = "PULCHOWK CAMPUS"

    CHARACTER (len = 10) :: my_format = '(f5.2)'

    print*,"Non-Formatted ",value

    print*,"Formatted "
    
    !Method One
    write(*,'(f5.2)') value 
    print'(f5.2)', value
    
    !Method Two
100 format (f5.2)

    print 100,value !100 here will be redirect to label 100 defined in line 100 and do formatting as given in that label

    !Method Three
    write(*,my_format)value  !i have create a character array in line number 7 which is replced here

    print*,""

    print*,"F format"

    print'(f5.1)',f_format
    print'(f5.2)',f_format
    print'(f4.0)',f_format
    print'(f7.3)',f_format
    print'(f5.3)',f_format 

    print*,""

    print*,"E format"
    
    print'(e12.1)',f_format
    print'(e13.2)',f_format
    print'(e15.4)',f_format
    print'(e14.3)',f_format
    print'(e8.3)',f_format
    print'(e5.3)',f_format

    print*, ""

    print*,"ES format"
    
    print'(es12.1)',f_format
    print'(es13.2)',f_format
    print'(es15.4)',f_format
    print'(es14.3)',f_format
    print'(es8.3)',f_format
    print'(es5.3)',f_format

    print*, ""

    print*, "I Format"

    print'(i3)',i_format
    print'(i4)',i_format
    print'(i5)',i_format
    print'(i6.4)',i_format
    print'(i7.5)',i_format
    print'(i8.8)',i_format

    print*,""

    print*, "Logical Format"

    print'(l4)',l_format
    print'(l3)',l_format
    print'(l2)',l_format
    print'(l1)',l_format

    print*,""

    print*, "A Format"

    print'(A8)',a_format
    print'(A10)',a_format
    print'(A17)',a_format
    print'(A5)',a_format

    print*,""

    print*,"RF Format"
    print'(2f5.2)',f_format,value !Result seen by this will have no space in between
    
    print*,""

    print*, "I and F Combined Format with X format"
    print'(i4,6x,f5.2)',i_format,f_format
    
    print*,""
    
    print*, "I and F Combined Format with / format"
    print'(i4,//,f5.2)',i_format,f_format
    
    print*,""
    
    print*, "I and F Combined Format with T format"
    print'(i4,/,T10,f5.2)',i_format,f_format

    print*,""

    print*,"******** --> Mean error in FORTRAN"

end program Format_I_O