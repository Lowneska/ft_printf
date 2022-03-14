#include "libprintf.h"

int		ft_printf(const char *format, ...)
{
    va_list vl;
    char *str;
    int count;

    str = (char *)format;
    count = 0;
    va_start(vl, format);
    while (*str)
    {
        if (*str  == '%')
        {
            str++;
            ft_format(*str, vl, &count);
            str++;
        }
        else
        {
            ft_putchar(*str);
            str++;
            count++;
        }
    }
    va_end(vl);
    return (count);
}

void    ft_format(char str, va_list vl, int * count)
{
    if (str == 'c')
		ft_format_c(vl, count);
	else if (str == 's')
		ft_format_s(vl, count);
	/*else if (str == 'p')
		ft_format_p(vl, count);*/
	else if (str == 'd' || str == 'i')
		ft_format_i_or_d(vl, count);
	else if (str == 'u')
		ft_format_u(vl, count);
	else if (str == 'x')
		ft_format_x(vl, count);
	else if (str == 'X')
		ft_format_X(vl, count);
	else if (str == '%')
    {
		ft_putchar('%');
        count++;
    }
}