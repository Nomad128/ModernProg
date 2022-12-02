program equal_str
    use iso_c_binding
    implicit none

    interface
        subroutine equal_string(strin, strout) bind(C)
!            implicit none
            use iso_c_binding
            character (kind = c_char), dimension(*) :: strin,strout
        end subroutine equal_string
    end interface

    character (len = 5,kind=c_char)::string_c='1234'//C_NULL_CHAR
    character (len = 5,kind=c_char)::string_f = '1234'

    call equal_string(string_c,string_f)


end program equal_str