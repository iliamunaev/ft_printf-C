/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:28:06 by imunaev-          #+#    #+#             */
/*   Updated: 2024/11/18 22:12:38 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Checks if a character is a valid format specifier for ft_printf.
** Valid specifiers are: c, s, p, d, i, u, x, X, %
**
** c: The character to check.
** Return: 1 if valid specifier, 0 otherwise.
*/

int	in_set(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

/*
** Processes a format specifier and outputs the corresponding argument.
**
** args: Variable argument list containing the data to format.
** specifier: Format specifier character (c, s, p, d, i, u, x, X, %).
** Return: Number of bytes written on success, -1 on failure.
*/

ssize_t	handle_format(va_list args, char specifier)
{
	ssize_t	result;

	if (specifier == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		result = ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		result = ft_putptr(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		result = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		result = ft_puthex(va_arg(args, unsigned int), specifier);
	else if (specifier == '%')
		result = ft_putchar('%');
	else
		result = ft_putchar(specifier);
	if (result == -1)
		return (-1);
	return (result);
}

/*
** Simplified printf implementation supporting format specifiers: c, s, p, d, i, u, x, X, %.
** - %c: character, %s: string, %p: pointer, %d/%i: signed int
** - %u: unsigned int, %x/%X: hex (lower/upper), %%: percent sign
**
** format: Format string with text and specifiers.
** ...: Variable arguments matching the format specifiers.
** Return: Total bytes written on success, -1 on failure.
*/

ssize_t	ft_printf(const char *format, ...)
{
	va_list	args;
	ssize_t	bytes_total;
	ssize_t	result;

	bytes_total = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && in_set(*(format + 1)))
		{
			format++;
			result = handle_format(args, *format);
		}
		else
			result = ft_putchar(*format);
		if (result == -1)
			return (va_end(args), -1);
		bytes_total += result;
		format++;
	}
	va_end(args);
	return (bytes_total);
}

/*
** Writes a single character to the standard output.
**
** c: The character to write.
** Return: The number of bytes written (1) on success, -1 on failure.
*/

ssize_t	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
