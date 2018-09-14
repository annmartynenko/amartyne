cmake_minimum_required(VERSION 3.9)
project(ft_printf)

set(CMAKE_CXX_STANDARD 11)

add_executable(ft_printf
        ft_printf.c
        ft_printf.h
        main.c
        Makefile
        libft
        extra_fun.c
        number.c
        ft_itoa_base.c
        ft_putunsnbr.c
        unicode.c
        find_flag.c
        for_flags.c)
