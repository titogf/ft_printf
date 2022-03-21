/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:04:59 by gfernand          #+#    #+#             */
/*   Updated: 2022/03/21 17:10:01 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("<<<%x>>>\n", -100);
	printf("<<<%x>>>\n", 42);
	printf("<<<%x>>>\n", 26);
	printf("<<<%d>>>\n", ft_type_x(42));
	printf("<<<%d>>>\n", ft_type_x(11));
	printf("<<<%d>>>\n", ft_type_x(12));
	printf("<<<%d>>>\n", ft_type_x(13));
	printf("<<<%d>>>\n", ft_type_x(14));
	printf("<<<%d>>>\n", ft_type_x(15));
	printf("<<<%d>>>\n", ft_type_x(20));
	printf("<<<%d>>>\n", ft_type_x(21));
	printf("<<<%d>>>\n", ft_type_x(22));
	printf("<<<%d>>>\n", ft_type_x(23));
	printf("<<<%d>>>\n", ft_type_x(24));
	printf("<<<%d>>>\n", ft_type_x(25));
	printf("<<<%d>>>\n", ft_type_x(26));
	printf("<<<%d>>>\n", ft_type_x(27));
	printf("<<<%d>>>\n", ft_type_x(-100));
	return (0);
}
