#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int	i;

	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == %)
		{
		}
		else
		{
			write(1, str + i, 1);
		}
	i++;
	}
	va_end(lst);
}
