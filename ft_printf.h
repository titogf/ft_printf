#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_return_arg(const char *str, va_list lst);
int	ft_type_NULL(void);
int	ft_type_c(char str);
int	ft_type_s(char *str);
int	ft_type_di(int n);

#endif
