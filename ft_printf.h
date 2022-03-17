#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_return_arg(const char *str, va_list lst);
int	ft_type_null(void);
int	ft_type_c(char str);
int	ft_type_s(char *str);
int	ft_type_di(int n);
int	ft_cantidad(int n);
int	ft_type_u(unsigned int n);

#endif
