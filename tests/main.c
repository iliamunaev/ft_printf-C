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

int main(void)
{
    // %c Prints a single character
    char single_char_a = 'a';
    char single_char_z = 'z';
    char single_char_32 = 32; // ASCII space
    char single_char_126 = 126; // ASCII tilde

    printf("Single characters: '%c', '%c', '%c', '%c'\n", single_char_a, single_char_z, single_char_32, single_char_126);

    // %s Prints a string
    char str1[] = "This is a string.";
    char str2[] = "... This is a string ...";

    printf("Strings: \"%s\" and \"%s\"\n", str1, str2);

    // %p The void * pointer argument has to be printed in hexadecimal format, dont forget add 0x!
    char *ptr = str1; // 0x (folowed by any nums like 0x7ffe05237fb0)
    char *null_ptr = NULL; // (nil)

    printf("Pointer to str1: %p, NULL pointer: %p\n", ptr, null_ptr);

    // %d Prints a decimal (base 10) number
    int decimal = 1777; // 1777

    printf("Decimal number: %d\n", decimal);

    // %i Prints an integer in base 10
    int integer_42 = 42;
    int integer_min = -2147483648;
    int integer_max = 2147483647;
    char integer_char_a = 'a'; // Implicit cast from char to int 97

    printf("Integers: %i, %i, %i, character as integer: %i\n", integer_42, integer_min, integer_max, integer_char_a);

    // %u Prints an unsigned decimal (base 10) number
    unsigned int unsigned_decimal1 = 42;
    unsigned int unsigned_decimal_max = 4294967295;

    printf("Unsigned decimals: %u, %u\n", unsigned_decimal1, unsigned_decimal_max);

    // %x Prints a number in hexadecimal (base 16) lowercase format
    int hexadecimal_0 = 0; // 0
    int hexadecimal_15 = 15; // f
    int hexadecimal_42 = 42; //  2a / 2A
    unsigned int hexadecimal_max = 2147483647; // 7fffffff / 7FFFFFFF

    printf("Hexadecimal (lowercase): %x, %x, %x, %x\n", hexadecimal_0, hexadecimal_15, hexadecimal_42, hexadecimal_max);

    // %X Prints a number in hexadecimal (base 16) uppercase format
    printf("Hexadecimal (uppercase): %X, %X, %X, %X\n", hexadecimal_0, hexadecimal_15, hexadecimal_42, hexadecimal_max);

    // %% Prints a percent sign
    printf("Percent sign: %%\n");

    return (0);
}
