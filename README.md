# ft_printf

**ft_printf** is a project to recreate the functionality of the C standard library's `printf()` function, focusing on variadic functions and extensible programming.

## Function Prototype

```c
int ft_printf(const char *, ...);
```

## Features

- **Supported Conversions**:
  - `%c`: Single character.
  - `%s`: String.
  - `%p`: Pointer address in hexadecimal.
  - `%d`: Decimal number.
  - `%i`: Integer in base 10.
  - `%u`: Unsigned decimal number.
  - `%x`: Lowercase hexadecimal.
  - `%X`: Uppercase hexadecimal.
  - `%%`: Percent sign.

- Adheres to Hive Norm standards, ensuring robust memory management and error handling.

## Requirements

- Implemented as a static library: `libftprintf.a`.
- Makefile with rules:`all`, `clean`, `fclean`, `re`.
- Tested against the standard `printf()` function.

## Tests


```bash
cc tests/main.c ft_printf.c ft_printf_utils.c
./a.out
```





