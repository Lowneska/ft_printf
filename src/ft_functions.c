#include "libprintf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
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

void ft_putnbr_base(char* base, size_t nbr, int	*count, int uns)
{
	int length = ft_strlen(base);
	long long nb = (long long)nbr;
	
	if ((nb < 0) && (!uns))
	{
		ft_putchar('-');
		nb *= -1;
		*count += 1;
	}

	if (nb > length)
		ft_putnbr_base(base, nb/length, count, uns);
	ft_putchar(base[nb % length]);
	*count += 1;
}