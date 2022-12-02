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

    character (len = 5,kind=c_char)::string_c='12abc'//C_NULL_CHAR
    character (len = 5,kind=c_char)::string_f = '12abc'

    call equal_string(string_c,trim(string_f))


end program equal_str