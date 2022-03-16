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

}
