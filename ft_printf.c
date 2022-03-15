#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	result;
	va_list	lst;

	va_start(lst, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == %)
		{
			i++;
			if (str[i])
				result += ft_return_arg(str, lst);
		}
		else
		{
			write(1, str + i, 1);
			result++;
		}
	i++;
	}
	va_end(lst);
	return (result);
}

int	ft_return_arg(const char *str, va_list lst)
{

}
