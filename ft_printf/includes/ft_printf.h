/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 13:55:06 by mferny            #+#    #+#             */
/*   Updated: 2019/04/03 17:49:08 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BUFF_SIZE 64

# define APPLY_RED     "\033[31m"
# define APPLY_GREEN   "\033[32m"
# define APPLY_YELLOW  "\033[33m"

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
 ***************** Main Data Holder **********************
 * format is the given format string ("%format")
 * length - returned value of ft_printf i.e. the number of printed symbols
 * spec, flag, minw, prec and conv are described below in parsing
 * base - numerical base (binary - 2, octal - 8 etc)
 */

typedef struct s_optionals
{
	const char  *format;
	int         fd;
	va_list     ap;
	int         length;
	int         spec;
	int         flag;
	int         minw;
	int         prec;
	int         conv;
	char        buff[BUFF_SIZE];
	size_t      current_pos;
	intmax_t    number;
	uint8_t     base;
	char        sign;
}               t_optionals;

/*
 * *************** Useful flags *************************
 */

enum                    //specificators
{
	S_SHARP = 1 << 0,   //#
	S_ZERO  = 1 << 1,             //0
	S_LEFT  = 1 << 2,             //-
	S_PLUS  = 1 << 3,             //+
	S_SPACE = 1 << 4,            //' '
	S_UPCASE = 1 << 5            //X
};

enum                    //flags
{
	F_SHORTINT = 1 << 0,             //h
	F_SIGNCHAR = 1 << 1,          //hh
	F_LONGINT  = 1 << 2,           //l
	F_LLONGINT = 1 << 3,          //ll
	F_LONGF    = 1 << 4,           //L
	F_INTMAX   = 1 << 5,           //j
	F_SIZE_T   = 1 << 6            //z
};

enum
{
    C_PERC  = 1 << 0,             //%
	C_UCHAR = 1 << 1,             //c
	C_STR   = 1 << 2,             //s
	C_NUM   = 1 << 3,             //n
	C_POINT = 1 << 4,             //p
	C_INTd  = 1 << 5,             //d
	C_INTi  = 1 << 6,             //i
	C_UOCT  = 1 << 7,             //o
	C_UDEC  = 1 << 8,             //u
	C_HEXS  = 1 << 9,             //x
	C_HEXB  = 1 << 10,            //X
	C_FLOAT = 1 << 11,            //f
	C_ULONG = 1 << 12             //U
};

/*
 * ******************* Parsing ******************************
 * divide all printf modifiers into 5 groups:
 * 1 - specificators (#, 0, -, +, ' '),
 * 2 - minimum width specificator (number in range 1 - 9)
 * 3 - precision setting ('.' followed by a number)
 * 4 - length modifiers (h, hh, l, ll)
 * 5 - conversion specifier (c, s, p, d, i, o, u, x, X, f, %)
 */

void        parse_specificator(t_optionals *optionals);
void        parse_minwidth(t_optionals *optionals);
void        parse_precision(t_optionals *optionals);
void        parse_flags(t_optionals *optionals);
void        parse_conversion(t_optionals *optionals);
void        parse_handlers(t_optionals *optionals);

/*
 * ******************* Utils ********************************
 */

void        printf_takearg(t_optionals *optionals);
void        printf_putstr(t_optionals *optionals, const char *str);
void        buffer(t_optionals *optionals, void *source, size_t size);
void        printf_itoa_base(t_optionals *optionals);
void        printf_putchar(t_optionals *optionals, unsigned ch);
void        printf_pointer(t_optionals *optionals);
void        check_color(t_optionals *optionals);
void    	putfloat(t_optionals *optionals);
void	*ft_memalloc(size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_strdel(char **as);
/*
 * ******************* Printf *******************************
 */
int         ft_printf(const char *format, ...);


#endif
