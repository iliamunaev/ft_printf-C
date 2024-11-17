/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:08:28 by imunaev-          #+#    #+#             */
/*   Updated: 2024/11/17 19:20:35 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
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

#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

void	main(void)
{
	// int
	printf("---------- Testing int ... -----------------\n");

	printf("INT_MIN: %i\n", INT_MIN);
	ft_printf("INT_MIN: %i\n", INT_MIN);

	printf("INT_MAX: %i\n", INT_MAX);
	ft_printf("INT_MAX: %i\n", INT_MAX);

	// unsigned int
	printf("---------- Testing unsigned int ... --------\n");

	printf("UINT_MAX: %u\n", UINT_MAX);
	ft_printf("UINT_MAX: %u\n", UINT_MAX);

	printf("'-1': %u\n", -1);
	ft_printf("'-1': %u\n", -1);


	printf("---------- Testing decimal ... -------------\n");


	printf("---------- Testing unsigned decimal ... ----\n");


	printf("---------- Testing string ... --------------\n");


	printf("---------- Testing pointer ... -------------\n");


	printf("---------- Testing hex low ... -------------\n");


	printf("---------- Testing hex upper int ... -------\n");


	printf("---------- Testing %% ... -------------------\n");

}
