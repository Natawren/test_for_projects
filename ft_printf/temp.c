#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>
#include <string.h>
#include <wchar.h>
#include "ft_printf.h"
#include <locale.h>
#include <limits.h>


int main()
{
   // wchar_t    s[4];
    //unsigned long int ptr;

	// s[0] = 0x53;
	// s[1] = 0xd800;
	// s[2] = 0x81000;
	// s[3] = '\0';
    //wchar_t *s = NULL;
   //wchar_t c = ;
   // unsigned long o = 3333333666333;
    //setlocale(LC_ALL, "");
    // ft_printf("%s\n", s);
    // printf("%s\n", s);
    // ft_printf("%d\n", 23);
    // printf("%d\n", 23);
    //printf("%d\n", ft_printf("%D", 0xff11ff11ff88));
    // ft_printf("% Zoooo\n");
    // printf("% Zoooo\n");

    printf("%d\n", ft_printf("%.10lx\n", -2147483648));
    printf("%d\n", printf("%.10lx\n", -2147483648));
    printf("\n");

    // printf("%d\n", printf("%.15f\n", 56.45));

    // printf("%d\n", printf("%25.15f\n", 56.45));

    // printf("%d\n", printf("%+-.15f\n", 56.45));
    // printf("%d\n", printf("%+-.15f\n", 99999999956.45));

    // printf("%d\n", ft_printf("%f\n", 56.45));
    // printf("%d\n", printf("%f\n", 56.45));

    // printf("%d\n", ft_printf("%f\n", 56.45));
    // printf("%d\n", printf("%f\n", 56.45));
    // printf("%d\n", ft_printf("%C\n", 0xdb02));
    // printf("%d\n", printf("%C\n", 0xdb02));
    // printf("\n");
    // printf("%d\n", ft_printf("%C\n", 0xdfff));
    // printf("%d\n", printf("%C\n", 0xdfff));
    // printf("\n");
    // printf("%d\n", ft_printf("%C\n", 0xbffe));
    // printf("%d\n", printf("%C\n", 0xbffe));
    // printf("\n");
    // printf("%d\n", ft_printf("%C\n", 254));
    // printf("%d\n", printf("%C\n", 254));
    // printf("\n");
    // printf("%d\n", ft_printf("%C\n", 256));
    // printf("%d\n", printf("%C\n", 256));
    // printf("\n");
    //printf("%d", printf("%ld", 0xff11ff11ff88));
    //printf("%d", WCHAR_MAX);
    //printf("%d\n", ft_printf("% u\n", 0));
    // printf("\n");
    //printf("%d\n", printf("% u\n", 0));
    return (0);
}


