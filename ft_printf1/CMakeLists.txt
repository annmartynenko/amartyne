cmake_minimum_required(VERSION 3.12)
project(ft_printf1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ft_printf1
        author
        extra_fun.c
        find_flag.c
        for_flags.c
        ft_arrfree.c
        ft_atoi.c
        ft_isalpha.c
        ft_isdigit.c
        ft_itoa_base.c
        ft_memcpy.c
        ft_memset.c
        ft_printf.c
        ft_printf.h
        ft_putchar.c
        ft_putchar_fd.c
        ft_putnbr.c
        ft_putnbr_fd.c
        ft_putnumber.c
        ft_putstr.c
        ft_putstr_fd.c
        ft_putstring.c
        ft_putunsnbr.c
        ft_strlen.c
        ft_strsub.c
        if_flags.c
        Makefile
        number.c
        specifier.c
        unicode.c
        ft_itoa_base_int.c
        ft_itoa_max.c
        ft_itoa_unslong.c
        main.c
        not_spec.c
        valid.c
        ft_putint.c)
