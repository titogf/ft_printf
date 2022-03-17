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

int	ft_type_x(unsigned int n)
{
	char	*s;
	int	i;
	int	a;
	int	longi;

	longi = ft_long(n);	
	s = malloc(sizeof(char) * (longi + 1));
	i = longi - 1;
	while (n >= 16)
	{
		a = n % 10;
		if (a == 10 || a == 11 || a == 12 || a == 13 || a == 14 || a == 15)
		{
			if (n % 10 == 10)
				s[i] = 'a';
			if (n % 10 == 11)
				s[i] = 'b';
			if (n % 10 == 12)
				s[i] = 'c';
			if (n % 10 == 13)
				s[i] = 'd';
			if (n % 10 == 14)
				s[i] = 'e';
			if (n % 10 == 15)
				s[i] = 'f';
		}
		else
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

int	ft_long(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i);
}





