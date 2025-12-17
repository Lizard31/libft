# libft

A custom C library developed as part of the curriculum at 42 Heilbronn. This library reimplements several standard C library functions and includes additional utility functions that serve as the foundation for future 42 projects.

## Overview

The libft project is designed to deepen understanding of basic C programming concepts by recreating fundamental functions from scratch. Rather than relying on the standard library, this implementation provides a comprehensive set of functions covering string manipulation, memory management, character validation, linked list operations, and more.

In addition to the core libft functions, this repository includes two major extensions: ft_printf and get_next_line, which are commonly used across various 42 projects.

## Project Structure

The library is organized into several categories of functions:

### Character Validation and Conversion
Functions for checking character types and converting case:
- `ft_isalpha` - checks for alphabetic characters
- `ft_isdigit` - checks for numeric characters
- `ft_isalnum` - checks for alphanumeric characters
- `ft_isascii` - checks for ASCII characters
- `ft_isprint` - checks for printable characters
- `ft_toupper` - converts lowercase to uppercase
- `ft_tolower` - converts uppercase to lowercase

### String Functions
Comprehensive string manipulation utilities:
- `ft_strlen` - calculates string length
- `ft_strchr` - locates character in string
- `ft_strrchr` - locates character in string from the end
- `ft_strncmp` - compares strings up to n bytes
- `ft_strnstr` - locates substring in string
- `ft_strdup` - duplicates a string
- `ft_substr` - extracts substring
- `ft_strjoin` - concatenates two strings
- `ft_strtrim` - trims characters from string edges
- `ft_split` - splits string into array using delimiter
- `ft_strmapi` - applies function to each character
- `ft_striteri` - applies function to each character with index
- `ft_strlcpy` - size-bounded string copy
- `ft_strlcat` - size-bounded string concatenation

### Memory Functions
Low-level memory manipulation:
- `ft_memset` - fills memory with constant byte
- `ft_bzero` - zeros out memory
- `ft_memcpy` - copies memory area
- `ft_memmove` - copies memory area with overlap handling
- `ft_memchr` - scans memory for character
- `ft_memcmp` - compares memory areas
- `ft_calloc` - allocates and zeros memory

### Conversion Functions
- `ft_atoi` - converts string to integer
- `ft_itoa` - converts integer to string

### Output Functions
Functions for writing to file descriptors:
- `ft_putchar_fd` - outputs character to file descriptor
- `ft_putstr_fd` - outputs string to file descriptor
- `ft_putendl_fd` - outputs string with newline to file descriptor
- `ft_putnbr_fd` - outputs integer to file descriptor
- `ft_putchar` - outputs character to stdout
- `ft_putstr` - outputs string to stdout
- `ft_putnbr` - outputs integer to stdout

### Linked List Functions
Implementation of a basic linked list data structure:
- `ft_lstnew` - creates new list element
- `ft_lstadd_front` - adds element to beginning
- `ft_lstadd_back` - adds element to end
- `ft_lstsize` - counts list elements
- `ft_lstlast` - returns last element
- `ft_lstdelone` - deletes single element
- `ft_lstclear` - deletes and frees entire list
- `ft_lstiter` - applies function to each element
- `ft_lstmap` - creates new list from function application

### ft_printf

A reimplementation of the printf function with support for the following conversions:
- `%c` - character
- `%s` - string
- `%p` - pointer address
- `%d` - signed decimal integer
- `%i` - signed decimal integer
- `%u` - unsigned decimal integer
- `%x` - hexadecimal lowercase
- `%X` - hexadecimal uppercase
- `%%` - literal percent sign

The ft_printf implementation handles variable arguments and provides formatted output functionality similar to the standard library version.

### get_next_line

A function that reads a line from a file descriptor, handling multiple file descriptors and various buffer sizes. This function is particularly useful for reading files line by line or processing input streams.

Key features:
- Reads from any file descriptor
- Returns one line at a time
- Handles different buffer sizes (configurable via BUFFER_SIZE)
- Manages static variables to preserve reading state between calls

## Compilation

The library uses a Makefile with the following targets:

```bash
make        # Compiles the library
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Recompiles the entire library
```

The compilation produces a static library file `libft.a` that can be linked with your projects.

## Usage

To use the library in your project:

1. Clone the repository and compile the library:
```bash
git clone https://github.com/Lizard31/libft.git
cd libft
make
```

2. Include the header in your C files:
```c
#include "libft.h"
```

3. Compile your project with the library:
```bash
cc your_program.c -L. -lft -o your_program
```

## Example

Here's a simple example demonstrating the use of various libft functions:

```c
#include "libft.h"

int main(void)
{
    char *str;
    char **split;
    int i;

    // String manipulation
    str = ft_strdup("Hello, 42 Heilbronn!");
    ft_putendl_fd(str, 1);

    // String splitting
    split = ft_split("This is a test", ' ');
    i = 0;
    while (split[i])
    {
        ft_putendl_fd(split[i], 1);
        free(split[i]);
        i++;
    }
    free(split);

    // Using ft_printf
    ft_printf("Number: %d, Hex: %x\n", 42, 42);

    // Using get_next_line
    int fd = open("file.txt", O_RDONLY);
    char *line;
    while ((line = get_next_line(fd)))
    {
        ft_printf("%s", line);
        free(line);
    }
    close(fd);

    free(str);
    return (0);
}
```

## Technical Details

- All functions follow the 42 Norm coding standards
- The library is written in C and compiles with `-Wall -Wextra -Werror` flags
- Memory management is handled carefully to prevent leaks
- Functions that allocate memory require the caller to free the allocated memory
- The library maintains compatibility with the original standard library functions where applicable

## Author

This library was developed as part of the 42 Heilbronn curriculum.

## License

This project is part of the 42 school curriculum and follows the school's policies regarding code sharing and usage.
