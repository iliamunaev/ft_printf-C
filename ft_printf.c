#include "libftprintf.h"


/*
Conversion specifications

%c Prints a single character.
%s Prints a string (as defined by the common C convention).
%p The void * pointer argument has to be printed in hexadecimal format.
%d Prints a decimal (base 10) number.
%i Prints an integer in base 10.
%u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase format.
%X Prints a number in hexadecimal (base 16) uppercase format.
%% Prints a percent sign.
*/

int	ft_printf(const char *s, ...)
{
	int i;

	i = 0;

	// iterate through the input string
	while(s[i] != '\0')
	{
		// find '%' to recognize the convertion
		if (s[i] == '%')
		{
			..... = convert(s[++i]);
			cspdiuxX%



		}
		ft_putchar(s[i]);
		i++;
	}
	return (i);

}
