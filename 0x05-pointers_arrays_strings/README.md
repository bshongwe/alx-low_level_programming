# 0x05. C - Pointers, arrays and strings

## General
    What are pointers and how to use them
    What are arrays and how to use them
    What are the differences between pointers and arrays
    How to use strings and how to manipulate them
    Scope of variables

## Tasks
### Task 0
#mandatory

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

    Prototype: void reset_to_98(int *n);

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98

Check printout: <code>./0-98</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 0-reset_to_98.c
   

### Task 1
#mandatory

Write a function that swaps the values of two integers.

    Prototype: void swap_int(int *a, int *b);

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap

Check printout: <code>./1-swap</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 1-swap.c
  

### Task 2
#mandatory

Write a function that returns the length of a string.

    Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen

Check printout: <code>./2-strlen</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 2-strlen.c
  

### Task 3
#mandatory

Write a function that prints a string, followed by a new line, to stdout.

    Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts

Check printout: <code>./3-puts</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 3-puts.c
  

### Taks 4
#mandatory

Write a function that prints a string, in reverse, followed by a new line.

    Prototype: void print_rev(char *s);

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev

Check printout: <code>./4-print_rev</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 4-print_rev.c
  

### Task 5
#mandatory

Write a function that reverses a string.

    Prototype: void rev_string(char *s);

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string

Check printout: <code>./5-rev_string</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 5-rev_string.c
  

### Task 6
#mandatory

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

    Prototype: void puts2(char *str);

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2

Check printout: <code>./6-puts2</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 6-puts2.c
  

### Task 7
#mandatory

Write a function that prints half of a string, followed by a new line.

    Prototype: void puts_half(char *str);
    The function should print the second half of the string
    If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half

Check printout: <code>./7-puts_half</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 7-puts_half.c
  

### Task 8
#mandatory

Write a function that prints n elements of an array of integers, followed by a new line.

    Prototype: void print_array(int *a, int n);
    where n is the number of elements of the array to be printed
    Numbers must be separated by comma, followed by a space
    The numbers should be displayed in the same order as they are stored in the array
    You are allowed to use printf

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array

Check printout: <code>./8-print_array</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 8-print_array.c
  

### Task 9
#mandatory

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

    Prototype: char *_strcpy(char *dest, char *src);
    Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy

Check printout: <code>./9-strcpy</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 9-strcpy.c
  

### Task 10
#advanced

Write a function that convert a string to an integer.

    Prototype: int _atoi(char *s);
    The number in the string can be preceded by an infinite number of characters
    You need to take into account all the - and + signs before the number
    If there are no numbers in the string, the function must return 0
    You are not allowed to use long
    You are not allowed to declare new variables of “type” array
    You are not allowed to hard-code special values
    We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi

Check printout: <code>./100-atoi</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 100-atoi.c
  

### 11
#advanced

Create a program that generates random valid passwords for the program 101-crackme.

    You are allowed to use the standard library
    You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
    man srand, rand, time
    gdb and objdump can help

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x05-pointers_arrays_strings
    File: 101-keygen.c


