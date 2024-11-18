/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:08:28 by imunaev-          #+#    #+#             */
/*   Updated: 2024/11/18 12:06:19 by imunaev-         ###   ########.fr       */
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

	printf("char_a: %i\n", 'a');
	ft_printf("char_a: %i\n", 'a');



	// decimal
	printf("---------- Testing decimal ... -------------\n");

	printf("INT_MIN: %d\n", INT_MIN);
	ft_printf("INT_MIN: %d\n", INT_MIN);

	printf("INT_MAX: %d\n", INT_MAX);
	ft_printf("INT_MAX: %d\n", INT_MAX);

	printf("'-1': %d\n", -1);
	ft_printf("'-1': %d\n", -1);

	printf("char_a: %d\n", 'a');
	ft_printf("char_a: %d\n", 'a');

	// unsigned decimaal
	printf("---------- Testing unsigned decimal ... -----\n");

	int p1 = printf("INT_MIN: %u\n", INT_MIN);
	int p2 = ft_printf("INT_MIN: %u\n", INT_MIN);
	printf("INT_MIN len: %i = %i\n\n", p1, p2);

	printf("INT_MAX: %u\n", INT_MAX);
	ft_printf("INT_MAX: %u\n", INT_MAX);

	printf("UINT_MAX: %u\n", UINT_MAX);
	ft_printf("UINT_MAX: %u\n", UINT_MAX);

	printf("'-1': %u\n", -1);
	ft_printf("'-1': %u\n", -1);

	printf("char_a: %u\n", 'a');
	ft_printf("char_a: %u\n", 'a');


	printf("---------- Testing string ... --------------\n");

	int i1 = printf("Norm str: %s\n", "Helsinki");
	int i2 = ft_printf("Norm str: %s\n", "Helsinki");
	printf("Norm str len: %i = %i\n\n", i1, i2);

	int i3 = printf("Empty str: %s\n", "");
	int i4 = ft_printf("Empty str: %s\n", "");
	printf("Empty str len: %i = %i\n\n", i3, i4);

	char	*str = NULL;
	int	i5 = printf("NULL str: %s\n", str);
	int i6 = ft_printf("NULL str: %s\n", str);
	printf("NULL str len: %i = %i\n\n", i5, i6);


	printf("---------- Testing pointer ... -------------\n");

	int intgr = 1;
	int	*ptr1 = &intgr;
	int ptrl1 = printf("Int ptr: %p\n", ptr1);
	int ptrl2 = ft_printf("Int ptr: %p\n", ptr1);
	printf("Int ptr len: %i = %i\n\n", ptrl1, ptrl2);

	char char_a = 'a';
	char	ptr2 = char_a;
	int ptr2l1 = printf("Char ptr: %p\n", ptr2);
	int ptr2l2 = ft_printf("Char ptr: %p\n", ptr2);
	printf("Char ptr len: %i = %i\n\n", ptr2l1, ptr2l2);

	char somestr[]= "abc";
	char	*ptr3 = somestr;
	int ptr3l1 = printf("Str ptr: %p\n", ptr3);
	int ptr3l2 = ft_printf("Str ptr: %p\n", ptr3);
	printf("Str ptr len: %i = %i\n\n", ptr3l1, ptr3l2);

	int *nptr= NULL;
	int ptr4l1 = printf("NULL ptr: %p\n", nptr);
	int ptr4l2 = ft_printf("NULL ptr: %p\n", nptr);
	printf("NULL ptr len: %i = %i\n\n", ptr4l1, ptr4l2);



	printf("---------- Testing hex low ... -------------\n");


	printf("INT_MIN: %x\n", INT_MIN);
	ft_printf("INT_MIN: %x\n", INT_MIN);

	printf("INT_MAX: %x\n", INT_MAX);
	ft_printf("INT_MAX: %x\n", INT_MAX);

	printf("UINT_MAX: %x\n", UINT_MAX);
	ft_printf("UINT_MAX: %x\n", UINT_MAX);

	printf("'-1': %x\n", 15);
	ft_printf("'-1': %x\n", 15);

	printf("char_a: %x\n", 'a');
	ft_printf("char_a: %x\n", 'a');


	printf("---------- Testing hex upper int ... -------\n");

	printf("INT_MIN: %X\n", INT_MIN);
	ft_printf("INT_MIN: %X\n", INT_MIN);

	printf("INT_MAX: %X\n", INT_MAX);
	ft_printf("INT_MAX: %X\n", INT_MAX);

	printf("UINT_MAX: %X\n", UINT_MAX);
	ft_printf("UINT_MAX: %X\n", UINT_MAX);

	printf("'-1': %X\n", 15);
	ft_printf("'-1': %X\n", 15);

	printf("char_a: %X\n", 'a');
	ft_printf("char_a: %X\n", 'a');


	printf("---------- Testing %% ... -------------------\n");

	printf("char_%: %%\n", '%');
	ft_printf("char_%: %%\n", '%');

}
