*This project has been created as part of the 42 curriculum by <login>.*

# Libft

## Description

Libft is my first own C library. The goal of the project is to understand how the most common standard functions work by re-implementing them from scratch, and to build a reusable toolbox that I can use in my future 42 projects.

The library is compiled as a static library, `libft.a`, and is organized in three parts:

1. **Libc functions**: re-implementations of standard functions, with the same prototypes and behaviors as the originals, prefixed with `ft_`.
2. **Additional functions**: useful functions that are either not in the libc or exist in a different form (string manipulation, number conversion, file descriptor output).
3. **Linked list functions**: a `t_list` structure and the functions to manipulate it.

Project constraints: written in C and compliant with the 42 Norm, no global variables, no memory leaks, helper functions declared `static`, and only `malloc`, `free` and `write` as external functions (and only where each function allows it).

## Instructions

### Compilation

The library is built with `cc` and the flags `-Wall -Wextra -Werror`, and archived with `ar`.

```
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # rebuilds everything from scratch
```

### Usage

Include the header in your source file and link against the library:

```c
#include "libft.h"
```

```
cc -Wall -Wextra -Werror main.c -L. -lft -o main
```

### Testing

`ft_bzero`, `ft_strlcpy` and `ft_strlcat` are not part of the glibc. To compare them against the system versions in my own tests, I include `<bsd/string.h>` and compile the tests with `-lbsd`. I also ran the tests with `valgrind` and `-fsanitize=address` to check for memory errors and leaks.

## Library description

### Part 1: Libc functions

| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks if a character is alphabetic. Returns 1 or 0. |
| `ft_isdigit` | Checks if a character is a digit. Returns 1 or 0. |
| `ft_isalnum` | Checks if a character is alphanumeric. Returns 1 or 0. |
| `ft_isascii` | Checks if a value is in the ASCII range (0 to 127). Returns 1 or 0. |
| `ft_isprint` | Checks if a character is printable. Returns 1 or 0. |
| `ft_strlen` | Returns the length of a string. |
| `ft_memset` | Fills the first `n` bytes of a memory area with a given byte. |
| `ft_bzero` | Sets the first `n` bytes of a memory area to zero. |
| `ft_memcpy` | Copies `n` bytes from one memory area to another (areas must not overlap). |
| `ft_memmove` | Copies `n` bytes between memory areas that may overlap. |
| `ft_strlcpy` | Copies a string into a buffer of a given size and always NUL-terminates it. Returns the length of the source. |
| `ft_strlcat` | Appends a string to another within a given total buffer size. Returns the length of the string it tried to create. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string. |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to `n` characters. |
| `ft_memchr` | Looks for a byte in the first `n` bytes of a memory area. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| `ft_strnstr` | Looks for a substring in a string, searching at most `len` characters. |
| `ft_atoi` | Converts the beginning of a string to an `int`. |
| `ft_calloc` | Allocates zero-initialized memory for an array. If `nmemb` or `size` is 0, it returns a unique pointer that can be passed to `free`. |
| `ft_strdup` | Returns a newly allocated copy of a string. |

### Part 2: Additional functions

| Function | Description |
| --- | --- |
| `ft_substr` | Returns a newly allocated substring starting at index `start`, with a maximum length of `len`. |
| `ft_strjoin` | Returns a newly allocated string that is the concatenation of two strings. |
| `ft_strtrim` | Returns a newly allocated copy of a string with the characters of a given set removed from the beginning and the end. |
| `ft_split` | Returns a newly allocated, `NULL`-terminated array of strings obtained by splitting a string with a delimiter character. |
| `ft_itoa` | Returns a newly allocated string representing an integer, including negative numbers. |
| `ft_strmapi` | Applies a function (given the index and the character) to each character of a string and returns the new string created. |
| `ft_striteri` | Applies a function (given the index and the address of the character) to each character of a string, modifying it in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3: Linked lists

The library uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
| --- | --- |
| `ft_lstnew` | Creates a new node with the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Frees the content of a node with a given function, then frees the node (not its successors). |
| `ft_lstclear` | Frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Applies a function to the content of each node and returns a new list with the results. If an allocation fails, the new list is freed. |

## Resources

- [Linux man pages](https://man7.org/linux/man-pages/): reference for the behavior of every re-implemented function.
- [GNU Make manual](https://www.gnu.org/software/make/manual/): for writing the Makefile.
- [Valgrind documentation](https://valgrind.org/docs/manual/): for finding memory errors and leaks.
- *The C Programming Language*, Brian W. Kernighan and Dennis M. Ritchie.
- The 42 Norm and the Libft subject, available on the 42 intranet.
- Discussions with other 42 candidates and peers about ideas, edge cases and tests.

### Use of AI

I used AI (Claude) as a learning aid, not to write the library. It helped me with:

- **Planning:** organizing the order in which to write the functions and splitting the work into daily goals.
- **Understanding concepts:** explaining ideas such as pointer arithmetic, `unsigned char` comparisons, overlapping memory in `ft_memmove` and freeing linked lists.
- **Edge cases and testing:** suggesting edge cases to test for each function and ways to use `valgrind` and `norminette`.
- **This README:** the structure and the text were drafted with AI assistance and then reviewed and adjusted by me.

All the C code in this repository was written, tested and understood by me.
