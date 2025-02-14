# Libft - Your First C Library

## 📝 About
Libft is a project that requires us to re-create some standard C library functions including some additional ones that can be useful for future projects.

## 🛠️ Usage

### Requirements
- GCC compiler
- Make

### Installation
1. Clone the repository:
```bash
git clone <your-repository-url>
```

2. Compile the library:
```bash
make        # Compiles mandatory functions
make bonus  # Compiles with bonus functions
```

This will create `libft.a` in the root directory.

### Using the Library
To use the library in your projects:
1. Include the header in your C files:
```c
#include "libft.h"
```

2. Compile with the library:
```bash
gcc your_file.c -L. -lft
```

## 🔍 Functions

### Part 1 - Libc Functions
| Function | Description |
|----------|-------------|
| ft_isalpha | Checks for an alphabetic character |
| ft_isdigit | Checks for a digit (0 through 9) |
| ft_isalnum | Checks for an alphanumeric character |
| ft_isascii | Checks whether c fits into the ASCII character set |
| ft_isprint | Checks for any printable character |
| ft_strlen | Calculates the length of a string |
| ft_memset | Fills memory with a constant byte |
| ft_bzero | Zeros a byte string |
| ft_memcpy | Copies memory area |
| ft_memmove | Copies memory area |
| ft_strlcpy | Copies up to size - 1 characters from string src to dst |
| ft_strlcat | Concatenates strings with the same input parameters as strlcpy |
| ft_toupper | Converts a lower-case letter to uppercase |
| ft_tolower | Converts an upper-case letter to lowercase |
| ft_strchr | Locates character in string |
| ft_strrchr | Locates character in string from the end |
| ft_strncmp | Compares two strings |
| ft_memchr | Scans memory for a character |
| ft_memcmp | Compares memory areas |
| ft_strnstr | Locates a substring in a string |
| ft_atoi | Converts a string to an integer |
| ft_calloc | Allocates memory for an array |
| ft_strdup | Creates a duplicate of the string passed as parameter |

### Part 2 - Additional Functions
| Function | Description |
|----------|-------------|
| ft_substr | Returns a substring from a string |
| ft_strjoin | Concatenates two strings |
| ft_strtrim | Trims beginning and end of string with specific set of chars |
| ft_split | Splits a string using a char as parameter |
| ft_itoa | Converts a number into a string |
| ft_strmapi | Applies a function to each character of a string |
| ft_striteri | Applies a function to each character of a string |
| ft_putchar_fd | Outputs a char to a file descriptor |
| ft_putstr_fd | Outputs a string to a file descriptor |
| ft_putendl_fd | Outputs a string to a file descriptor, followed by a newline |
| ft_putnbr_fd | Outputs a number to a file descriptor |

### Bonus Part
| Function | Description |
|----------|-------------|
| ft_lstnew | Creates a new list element |
| ft_lstadd_front | Adds an element at the beginning of a list |
| ft_lstsize | Counts the number of elements in a list |
| ft_lstlast | Returns the last element of the list |
| ft_lstadd_back | Adds an element at the end of a list |
| ft_lstdelone | Deletes an element from the list |
| ft_lstclear | Deletes and frees the given element and every successor |
| ft_lstiter | Applies a function to each element of a list |
| ft_lstmap | Applies a function to each element of a list |

## 📈 Testing
```bash
make test  # If you have test files
```

## 🧹 Cleaning Up
```bash
make clean    # Removes object files
make fclean   # Removes object files and binary
make re       # fclean + make
```

## ✨ Contributing
This project is for learning purposes only and not open for contributions.

## 📝 License
This project is licensed under the terms of the MIT license.
