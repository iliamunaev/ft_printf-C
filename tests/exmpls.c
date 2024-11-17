/* exmpls.c */

#include <stdio.h>
#include <limits.h>
#include "../ft_printf_utils.c"


void main(void)
{
// int
ft_putnbr(INT_MAX);
printf("\n%i\n", INT_MAX);

ft_putnbr(INT_MIN);
printf("\n%i\n", INT_MIN);

// str
ft_putstr("Hola!\n");
printf("Hola!\n");

char *str = NULL;
ft_putstr(str);
printf("\n%s\n", str);

// hex l, u

ft_puthex(15, 'x');
printf("\n%x\n", 15);

ft_puthex(15, 'X');
printf("\n%X\n", 15);

ft_puthex(INT_MAX, 'x');
printf("\n%x\n", INT_MAX);

ft_puthex(INT_MIN, 'X');
printf("\n%X\n", INT_MIN);

ft_puthex(158975, 'X');
printf("\n%X\n", 158975);

ft_puthex(158975, 'x');
printf("\n%x\n", 158975);

// ptr
char value = 'b';
char *ptr;
ptr = &value; // Correct: ptr now holds the address of value.

ft_putptr(ptr); // Assuming ft_putptr outputs the address stored in ptr.
printf("\n%p\n", (void *)ptr); // Print the address of value.




}

