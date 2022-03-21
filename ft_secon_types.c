/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secon_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:57:52 by gfernand          #+#    #+#             */
/*   Updated: 2022/03/21 17:11:16 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_u(unsigned int n)
{
	char			*s;
	int				longi;
	int				i;
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
	char	*a;
	int		i;
	int		longi;

	a = "0123456789abcdef";
	longi = ft_long(n);
	s = malloc(sizeof(char) * (longi + 1));
	i = longi - 1;
	while (n >= 16)
	{
		s[i] = *(a + (n % 16));
		n /= 16;
		i--;
	}
	s[i] = *(a + (n % 16));
	s[longi] = '\0';
	i = ft_type_s(s);
	free(s);
	return (i);
}

int	ft_type_upperx(unsigned int n)
{
	char	*s;
	char	*a;
	int		i;
	int		longi;

	a = "0123456789ABCDEF";
	longi = ft_long(n);
	s = malloc(sizeof(char) * (longi + 1));
	i = longi - 1;
	while (n >= 16)
	{
		s[i] = *(a + (n % 16));
		n /= 16;
		i--;
	}
	s[i] = *(a + (n % 16));
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

int	ft_type_p
