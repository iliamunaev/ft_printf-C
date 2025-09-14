# ft_printf

**ft_printf** is a comprehensive C implementation of the standard library's `printf()` function, developed as part of the Hive Helsinki (School 42) curriculum. This project focuses on mastering variadic functions, format parsing, and low-level output operations while adhering to strict coding standards.

## Features

The ft_printf library provides a complete implementation of printf functionality with the following capabilities:

- **Format Specifiers Support**:
  - `%c`: Single character output
  - `%s`: String output with NULL handling
  - `%p`: Pointer address in hexadecimal format
  - `%d`: Signed decimal integer
  - `%i`: Signed decimal integer (same as %d)
  - `%u`: Unsigned decimal integer
  - `%x`: Lowercase hexadecimal output
  - `%X`: Uppercase hexadecimal output
  - `%%`: Literal percent sign output

- **Robust Error Handling**: Comprehensive NULL pointer checks and buffer overflow prevention
- **Memory Safety**: No dynamic memory allocation, ensuring thread safety and reliability
- **42 School Compliance**: Follows strict Norm standards for code quality and structure
- **Cross-Platform Compatibility**: Uses only standard C library functions

## Requirements

### System Requirements
- **Operating System**: Linux, macOS, or Windows (with WSL)
- **Compiler**: GCC or Clang with C99 support
- **Build System**: GNU Make

### Dependencies
- Standard C Library (`<unistd.h>`, `<stdarg.h>`)
- No external libraries required

## Installation Instructions

### 1. Clone the Repository
```bash
git clone https://github.com/your-username/ft_printf.git
cd ft_printf
```

### 2. Build the Library
```bash
make
```
This creates `libftprintf.a` - the static library containing all ft_printf functions.

### 3. Include in Your Project
Add these files to your project directory:
- `ft_printf.h` (header file)
- `libftprintf.a` (compiled library)

### 4. Compile Your Program
```bash
cc your_program.c libftprintf.a -o your_program
```

## Usage Examples

### Basic Usage
```c
#include "ft_printf.h"

int main(void) {
    // Basic string and character output
    ft_printf("Hello, %s! Today is %c\n", "World", 'A');

    // Numeric output
    int num = 42;
    ft_printf("Number: %d, Unsigned: %u\n", num, num);

    // Hexadecimal output
    ft_printf("Lowercase hex: %x, Uppercase hex: %X\n", 255, 255);

    // Pointer output
    char *str = "Hello";
    ft_printf("String address: %p\n", str);

    return 0;
}
```

### Advanced Examples
```c
#include "ft_printf.h"
#include <limits.h>

int main(void) {
    // Handle edge cases
    char *null_str = NULL;
    ft_printf("NULL string: %s\n", null_str);

    // Large numbers
    ft_printf("INT_MAX: %d\n", INT_MAX);
    ft_printf("UINT_MAX: %u\n", UINT_MAX);

    // Mixed format specifiers
    ft_printf("Character: %c, String: %s, Number: %d\n", 'Z', "test", -123);

    return 0;
}
```

### Integration with Existing Code
```c
// Replace standard printf calls
// Before:
printf("Error: %s at line %d\n", error_msg, line_num);

// After:
ft_printf("Error: %s at line %d\n", error_msg, line_num);
```

## Project Structure

```
ft_printf/
├── ft_printf.c          # Main ft_printf function and core logic
├── ft_printf_utils.c    # Utility functions for different format specifiers
├── ft_printf.h          # Header file with function prototypes
├── Makefile            # Build configuration and rules
├── tests/
│   └── main.c          # Comprehensive test suite
├── README.md           # Original project documentation
├── README_2.md         # Enhanced documentation (this file)
└── en.subject.pdf      # Original project requirements
```

### File Descriptions

- **`ft_printf.c`**: Contains the main `ft_printf()` function, format parsing logic, and character output functions
- **`ft_printf_utils.c`**: Implements all format specifier handlers (`ft_putstr`, `ft_putnbr`, `ft_puthex`, etc.)
- **`ft_printf.h`**: Function declarations and necessary includes
- **`Makefile`**: Provides build targets (`all`, `clean`, `fclean`, `re`)
- **`tests/main.c`**: Extensive test cases comparing ft_printf output with standard printf

## Testing

Run the comprehensive test suite to verify functionality:

```bash
cd tests
cc main.c ../ft_printf.c ../ft_printf_utils.c
./a.out
```

The test suite compares ft_printf output with standard printf for:
- All supported format specifiers
- Edge cases (NULL pointers, INT_MIN/MAX, etc.)
- Return value accuracy
- Mixed format specifier combinations


### Coding Standards
- **42 Norm Compliance**: Strict adherence to 42 coding standards
- **Function Documentation**: All functions must have descriptive comments
- **Error Handling**: Robust error checking and graceful failure handling
- **Memory Safety**: No memory leaks or unsafe operations
- **Cross-Platform**: Ensure compatibility across different systems

### Testing Requirements
- All existing tests must pass
- New features require comprehensive test cases
- Edge cases and error conditions must be covered

## License

This project is developed as part of the Hive Helsinki (School 42) curriculum. Please refer to the school's intellectual property policies for usage rights and restrictions.

## Contact/Support

### Getting Help
- **Issues**: Report bugs or request features via GitHub Issues
- **Discussions**: Join project discussions for questions and suggestions
- **42 Network**: Connect with fellow students through the 42 intranet

### Development Team
- **Author**: imunaev- (Hive Helsinki student)
- **Project**: ft_printf - Variadic Functions Project
- **Curriculum**: C Programming Fundamentals

---

**Built with ❤️ at Hive Helsinki (School 42)**

*Mastering low-level C programming through practical implementation of core library functions.*
