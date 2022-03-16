#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int	i;
	int	result;

	va_start(lst, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == %)
		{
			i++;
			if (str[i])
				result += ft_return_arg(str + i, lst);
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
	void	*string;

	string = va_arg(lst, char *);
	if (!string && *str == s)
		return (ft_type_null());
	if (*str == c)
		return (ft_type_c((char) string));
	if (*str == s)
		return (ft_type_s((char *) string));
	if (*str == p)
		return (ft_type_p);
	if (*str == d || *str == i)
		return (ft_type_di((int) string));
	if (*str == u)
		return (ft_type_u);
	if (*str == x)
		return (ft_type_x);
	if (*str == X)
		return (ft_type_X);
	if (*str == %)
		return (ft_type_c(%));
	return (-1);
}
