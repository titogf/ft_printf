#include "ft_printf.h"

int	ft_type_u(unsigned int n)
{
	char	*s;
	int		longi;
	int		i;
	unsigned int	b;

	b = n;
	longi = 1;
	while (b >= 10)
	{
		b /= 10;
		longi++;
	}
	s = malloc(sizeof(char) * (longi + 1));
	i = longi - 1;
	while (n >= 10)
	{
		s[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	s[i] = (n % 10) + 48;
	s[longi] = '\0';
	i = ft_type_s(s);
	free(s);
	return (i);
}
