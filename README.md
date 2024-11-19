# ft_printf

**ft_printf** is a project to recreate the functionality of the C standard library's `printf()` function, focusing on variadic functions and extensible programming.

The project is a part of **Hive Helsinki coding school (School 42)** studies.
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


## What I Learned

### **Understanding Variadic Functions**
- I mastered working with **variadic arguments** using macros like `va_start`, `va_arg`, and `va_end`.
- This skill is essential for understanding how low-level functions process variable numbers of parameters, which is a common technique in embedded systems and system-level programming.

### **Code Modularity and Reusability**
- I learned to design modular and reusable code. By creating a structured approach to handle various format specifiers (`%c`, `%s`, `%d`, etc.), I developed a library that was extensible and easy to debug.

### **Debugging and Error Handling**
- I gained experience in robust error handling to avoid undefined behavior, such as buffer overflows.

### **Adherence to Standards**
- The project required strict compliance with the 42 School Norm, which emphasized clean and maintainable code—a practice I follow in all my work.


## Skills Developed
- **Low-Level C Programming**: Deepened my understanding of the standard library, system calls like `write`, and how functions like `printf` operate under the hood.
- **Attention to Detail**: Learned to meet strict project requirements and match the output of a highly versatile function.


## Potential Improvements
- If I revisited the project, I would optimize the buffer management to minimize the number of `write` system calls, making the function even more efficient for resource-constrained environments.
