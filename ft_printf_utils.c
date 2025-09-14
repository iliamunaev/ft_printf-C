/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:07:18 by imunaev-          #+#    #+#             */
/*   Updated: 2024/11/18 21:27:32 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Writes a string to the standard output, handling NULL strings by printing "(null)".
**
** str: The string to write (can be NULL).
** Return: The total number of bytes written.
*/

ssize_t	ft_putstr(char *str)
{
	ssize_t	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

/*
** Writes a pointer address to the standard output in hexadecimal format.
** NULL pointers are displayed as "(nil)".
**
** ptr: The pointer to write.
** Return: The total number of bytes written.
*/

ssize_t	ft_putptr(void *ptr)
{
	ssize_t			count;
	unsigned long	address;

	address = (unsigned long)ptr;
	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex(address, 'x');
	return (count);
}

/*
** Converts an unsigned long integer to hexadecimal representation and writes it.
** Supports both lowercase ('x') and uppercase ('X') hexadecimal digits.
**
** num: The number to convert.
** specifier: 'x' for lowercase hex, 'X' for uppercase hex.
** Return: The total number of bytes written.
*/

ssize_t	ft_puthex(unsigned long num, char specifier)
{
	ssize_t	count;
	char	*hex_digits;

	count = 0;
	if (specifier == 'x')
		hex_digits = "0123456789abcdef";
	else if (specifier == 'X')
		hex_digits = "0123456789ABCDEF";
	else
		return (0);
	if (num >= 16)
		count += ft_puthex(num / 16, specifier);
	count += ft_putchar(hex_digits[num % 16]);
	return (count);
}

/*
** Converts an unsigned integer to decimal string representation and writes it.
**
** n: The unsigned integer to write.
** Return: The total number of bytes written.
*/

ssize_t	ft_putnbr_unsigned(unsigned int n)
{
	ssize_t	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

/*
** Converts a signed integer to decimal string representation and writes it.
** Handles negative numbers by prefixing with a minus sign.
**
** n: The signed integer to write.
** Return: The total number of bytes written.
*/

ssize_t	ft_putnbr(int n)
{
	ssize_t	count;
	long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	count += ft_putchar((num % 10) + '0');
	return (count);
}
