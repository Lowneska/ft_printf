#include"printflib.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && *str)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
//Character 
void	ft_format_c(va_list vl, int *count)
{
	ft_putchar((char)va_arg(vl, int));
    count++;
}

void	ft_format_s(va_list vl, int *count)
{
	char	*str;

	str = va_arg(vl, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
	}	
	else
	{
		ft_putstr(str);
		count += ft_strlen(str);
	}
}
 //A faire 
/*void	ft_format_p(va_list vl, int *count)
{
	size_t	pointer;

	pointer = va_arg(vl, size_t);
}*/

// i and d format behave the same in printf
void	ft_format_i_or_d(va_list vl, int *count)
{
	int	integer;

	integer = va_arg(vl, int);

	ft_putnbr_base("0123456789", integer, count, 0);
}

void	ft_format_u(va_list vl, int *count)
{
	unsigned int	nb;

	nb = va_arg(vl, unsigned int);

	ft_putnbr_base("0123456789", nb, count, 1);
}

void	ft_format_x(va_list vl, int *count)
{
	size_t	nb;
	
	nb = va_arg(vl, size_t);
	ft_putnbr_base("0123456789abcdef", nb, count, 1);
}

void ft_putnbr_base(char* base, size_t nbr, int	*count, int uns)
{
	int length = ft_strlen(base);
	int nb = (long long)nbr;

	if ((nb < 0) && (!uns))
	{
		ft_putchar('-');
		nb *= -1;
	}

	if (nb > length)
		ft_putnbr_base(base, nb/length, count, uns);
	ft_putchar(base[nb % length]);
	count++;
}
void	ft_format_X(va_list vl, int *count)
{
	size_t	nb;

	nb = va_arg(vl, size_t);
	ft_putnbr_base("0123456789ABCDEF", nb, count, 1);
}
