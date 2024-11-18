/* ft_printf.h */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	handle_format(va_list args, char specifier);

// utils
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthex(unsigned long num, char specifier);
int	ft_putptr(void *ptr);

#endif
