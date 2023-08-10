# 0x04. C - More functions, more nested loops

## Tasks
### Task 0
#mandatory

Write a function that checks for uppercase character.

    Prototype: int _isupper(int c);
    Returns 1 if c is uppercase
    Returns 0 otherwise
FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

Compile:
<code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper</code>

Check printout:
<code>./0-isuper</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 0-isupper.c
    


### Task 1
#mandatory

Write a function that checks for a digit (0 through 9).

    Prototype: int _isdigit(int c);
    Returns 1 if c is a digit
    Returns 0 otherwise
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit</code>

Check printout: <code>./1-isdigit</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 1-isdigit.c
    


### Task 2
#mandatory

Write a function that multiplies two integers.

    Prototype: int mul(int a, int b);

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul</code>

Check printout: <code>./2-mul</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 2-mul.c
    


### Task 3
#mandatory

Write a function that prints the numbers, from 0 to 9, followed by a new line.

    Prototype: void print_numbers(void);
You can only use _putchar twice in your code

Checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers</code>

Check printout: <code>./3-print_numbers | cat -e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 3-print_numbers.c
    


### Task 4
#mandatory

Write a function that prints the numbers, from 0 to 9, followed by a new line.

    Prototype: void print_most_numbers(void);
    Do not print 2 and 4
You can only use _putchar twice in your code

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers</code>

Check printout: <code>./4-print_most_numbers</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 4-print_most_numbers.c
    


## Task 5
#mandatory

Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

    Prototype: void more_numbers(void);
You can only use _putchar three times in your code

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers</code>

Check printout: <code>./5-more_numbers</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 5-more_numbers.c
    


### Task 6
#mandatory

Write a function that draws a straight line in the terminal.

    Prototype: void print_line(int n);
    You can only use _putchar function to print
    Where n is the number of times the character _ should be printed
    The line should end with a \n
    If n is 0 or less, the function should only print \n

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines</code>

Check printout: <code>./6-lines | cat -e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 6-print_line.c
    


### Task 7
#mandatory

Write a function that draws a diagonal line on the terminal.

    Prototype: void print_diagonal(int n);
    You can only use _putchar function to print
    Where n is the number of times the character \ should be printed
    The diagonal should end with a \n
    If n is 0 or less, the function should only print a \n

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals</code>

Check printout: <code>./7-diagonals | cat -e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 7-print_diagonal.c
    


### Task 8
#mandatory

Write a function that prints a square, followed by a new line.

    Prototype: void print_square(int size);
    You can only use _putchar function to print
    Where size is the size of the square
    If size is 0 or less, the function should print only a new line
    Use the character # to print the square

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares</code>

Check printout: <code>./8-squares</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 8-print_square.c
    


### Task 9
#mandatory

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

    Each number or word should be separated by a space
    You are allowed to use the standard library

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz</code>

Check printout: <code>./9-fizz_buzz</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 9-fizz_buzz.c
    


### Task 10
#mandatory

Write a function that prints a triangle, followed by a new line.

    Prototype: void print_triangle(int size);
    You can only use _putchar function to print
    Where size is the size of the triangle
    If size is 0 or less, the function should print only a new line
    Use the character # to print the triangle

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles</code>

Check printout: <code>./10-triangles</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 10-print_triangle.c
    


### Task 11
#advanced

The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

Compile: <code> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 100-prime_factor.c
    


### Task 12
#advanced

Write a function that prints an integer.

    Prototype: void print_number(int n);
    You can only use _putchar function to print
    You are not allowed to use long
    You are not allowed to use arrays or pointers
    You are not allowed to hard-code special values

Compile: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers</code>

Check printout: <code>./101-print_numbers</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x04-more_functions_nested_loops
    File: 101-print_number.c


### Additional Notes:
I added files for some some of the tasks for test purposes
