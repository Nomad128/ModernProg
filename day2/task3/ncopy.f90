program ncopy_string
    use iso_c_binding
    implicit none

    interface
        subroutine ncopy(strin, strout, n) bind(C)
!            implicit none
            use iso_c_binding
            character (kind = c_char), dimension(*) :: strin,strout
            integer(kind = c_int), bind(C) :: n
        end subroutine ncopy
    end interface

    character (len = 7,kind=c_char)::string_c='12aac'//C_NULL_CHAR
    character (kind=c_char)::string_f(7) = 'x'

    integer :: n = 3

    write(*,'(A,I0,A)') "Строки до копирования(n=",n,'):'
    write(*,*) string_c
    write(*,*) string_f
    call ncopy(string_c,string_f,n)

    write(*,*)'Строки после копирования:'
    write(*,*) string_c
    write(*,*) string_f
    !    write()


end program ncopy_string