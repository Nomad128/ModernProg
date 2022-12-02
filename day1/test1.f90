!program test
!    implicit none
!
!    integer a,b
!    write (*,*) 'Введите 2 числа A и B:'
!    read (*,*) a,b
!
!    write (*,*) 'Сумма = ', a+b
!    write (*,*) 'Разность = ', a-b
!    write (*,*) 'Умножение = ', a*b
!    write (*,*) 'Деление = ', a/b
!    write (*,*) 'Возведение в степень = ', a**b
!
!end program test

program test2
    integer, dimension (5) :: vector1
    integer, dimension (5) :: vector2
    integer :: sum = 0
    integer, dimension(5) :: sum_vec

    call fillArray(vector1)
    call fillArray(vector2)

    call find_permatate(vector1,vector2,sum)
    write(*,*) 'Скалярное произведение =', sum

    call find_sum_2_vector(vector1,vector2,sum_vec)
    write(*,*) 'Сумма векторов = ', sum_vec



end program test2

subroutine fillArray (a)
    implicit none
    integer, dimension(5), intent(out) :: a
    integer :: i
    do i = 1,5
        a(i) = i
!        read (*,*) a(i)
    end do

end subroutine fillArray

subroutine find_permatate(a,b,sum)
    integer, dimension(5) :: a,b
    integer, intent(out) :: sum
    do i = 1,5
        sum = sum + a(i) * b(i)
    end do


end subroutine find_permatate

subroutine find_sum_2_vector(vec1,vec2,sum_vec)
    integer, dimension(5) :: vec1,vec2
    integer, dimension(5), intent(out) :: sum_vec
    do i = 1,5
        sum_vec(i) = vec1(i) + vec2(i)
    end do

end subroutine find_sum_2_vector
