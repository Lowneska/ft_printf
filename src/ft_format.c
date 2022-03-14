#include "libprintf.h"

//Character 
void	ft_format_c(va_list vl, int *count)
{
	ft_putchar((char)va_arg(vl, int));
    *count += 1;
}

void	ft_format_s(va_list vl, int *count)
{
	char	*str;

	str = va_arg(vl, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
		*count += 6;
	}	
	else
	{
		ft_putstr(str);
		*count += ft_strlen(str);
	}
}
//Pointer adress
void	ft_format_p(va_list vl, int *count)
{
	void*	adress;

	adress = va_arg(vl, void*);
	if (adress == NULL)
	{
		ft_putstr("(nil)");
		*count += 5;
	}
	else
	{
		ft_putstr("0x");
		*count += 2;
		ft_putnbr_base("0123456789abcdef", (size_t)adress, count, 1);
	}

}

// i and d format behave the same in printf
void	ft_format_i_or_d(va_list vl, int *count)
{
	int	integer;

	integer = va_arg(vl, int);

	ft_putnbr_base("0123456789", integer, count, 0);
}
//unsigned int
void	ft_format_u(va_list vl, int *count)
{
	unsigned int	nb;

	nb = va_arg(vl, unsigned int);

	ft_putnbr_base("0123456789", nb, count, 1);
}
//Hexadecimal
void	ft_format_x(va_list vl, int *count)
{
	size_t	nb;
	
	nb = va_arg(vl, size_t);
	ft_putnbr_base("0123456789abcdef", nb, count, 1);
}

void	ft_format_X(va_list vl, int *count)
{
	size_t	nb;

	nb = va_arg(vl, size_t);
	ft_putnbr_base("0123456789ABCDEF", nb, count, 1);
}
