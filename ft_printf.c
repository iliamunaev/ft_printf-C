/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:28:06 by imunaev-          #+#    #+#             */
/*   Updated: 2024/11/18 15:12:49 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Conversion specifications

%c Prints a single character.
%s Prints a sing (as defined by the common C convention).
%p The void * pointer argument has to be printed in hexadecimal s.
%d Prints a decimal (base 10) number.
%i Prints an integer in base 10.
%u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase s.
%X Prints a number in hexadecimal (base 16) uppercase s.
%% Prints a percent sign.
*/

#include "ft_printf.h"

int	handle_format(va_list args, char specifier)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_puthex(va_arg(args, unsigned int), specifier);
	else if (specifier == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		bytes_total;

	i = 0;
	bytes_total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			bytes_total += handle_format(args, format[i]);
		}
		else
			bytes_total += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (bytes_total);
}
