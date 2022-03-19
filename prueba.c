#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("<<<%d>>>\n", ft_type_x(18));
	printf("<<<%d>>>\n", ft_type_x(19));
	printf("<<<%d>>>\n", ft_type_x(20));
	printf("<<<%d>>>\n", ft_type_x(22));
	printf("<<<%d>>>\n", ft_type_x(23));
	printf("<<<%d>>>\n", ft_type_x(24));
	printf("<<<%d>>>\n", ft_type_x(25));
	printf("<<<%d>>>\n", ft_type_x(26));
	printf("<<<%d>>>\n", ft_type_x(27));
	return 0;
}

int	ft_type_x(unsigned int n)
{
	char	*s;
	int	i;
	int	a;
	int	b;
	int	longi;

	longi = ft_long(n);	
	s = malloc(sizeof(char) * (longi + 1));
	i = 0;
	b = (n % 16) + 48;
	while (n > 15)
	{
		a = n / 16;
		if (a == 10 || a == 11 || a == 12 || a == 13 || a == 14 || a == 15)
		{
			if (a == 10)
				s[i] = 'a';
			if (a == 11)
				s[i] = 'b';
			if (a == 12)
				s[i] = 'c';
			if (a == 13)
				s[i] = 'd';
			if (a == 14)
				s[i] = 'e';
			if (a == 15)
				s[i] = 'f';
		}
		else
			s[i] = (n / 16) + 48;
		n /= 16;
		i++;
	}
	if (b == 10 || b == 11 || b == 12 || b == 13 || b == 14 || b == 15)
		{
			if (b == 10)
				s[i] = 'a';
			if (b == 11)
				s[i] = 'b';
			if (b == 12)
				s[i] = 'c';
			if (b == 13)
				s[i] = 'd';
			if (b == 14)
				s[i] = 'e';
			if (b == 15)
				s[i] = 'f';
		}
		else
			s[i] = b;
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
