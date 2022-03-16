#include "ft_printf.h"

int	ft_type_NULL(void)
{
	write(1, "(null)", 6);
	return (6);
}

int	ft_type_c(char	str)
{
	write(1, &str,1)
	return (1);
}

int	ft_type_s(char *str)
{
	int	i;

	i = 0;	
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	return (i);
}

int	ft_type_di(int	n)
{
	int	a;
	int	result;

	result = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		result++;
	}
	if (n < 10)
	{
		n += 48;
		write(1, &n, 1);
		result++;
		return (result);
	}
	else
	{
		a = (n % 10) + 48;
		n /= 10;
		ft_type_di(n);
		write (1, &a, 1);
		result++;
	}
	return (result);
}
