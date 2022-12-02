program task1
    integer :: value, n = 1

    write (*,*) 'Введите число:'
    read (*,*) value

    do while ((value/10) /= 0)
        n = n + 1
        value = value/10
    end do

    write (*,*) "Количество цифр", n

end program task1