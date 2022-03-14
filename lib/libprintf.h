#ifndef LIBPRINTF_H
#define LIBPRINTF_H

#include <stdarg.h>
#include <unistd.h>

void    ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_putnbr_base(char* base, size_t nbr, int	*count, int uns);
int		ft_strlen(const char *s);
void	ft_format_c(va_list vl, int *count);
void	ft_format_s(va_list vl, int *count);
void	ft_format_p(va_list vl, int	*count);
void	ft_format_i_or_d(va_list vl, int *count);
void	ft_format_u(va_list vl, int *count);
void	ft_format_x(va_list vl, int *count);
void	ft_format_X(va_list vl, int *count);

void    ft_format(char str, va_list vl, int * count);
int		ft_printf(const char *format, ...);
#endif