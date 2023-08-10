# 0x02. C - Functions, nested loops

## General
    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
    You are allowed to use _putchar
    You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
    Don’t forget to push your header file


### Task 0
#mandatory

Write a program that prints _putchar, followed by a new line.

    The program should return 0

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 0-putchar.c
    


### Task 1
#mandatory

Write a function that prints the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet(void);
    You can only use _putchar twice in your code

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet


Check output:

    julien@ubuntu:~/0x02$ ./1-alphabet

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 1-alphabet.c
    


### Task 2
#mandatory

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet_x10(void);
    You can only use _putchar twice in your code

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10

Checkout output:

    julien@ubuntu:~/0x02$ ./2-alphabet_x10

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 2-print_alphabet_x10.c
    


### Task 3
#mandatory

Write a function that checks for lowercase character.

    Prototype: int _islower(int c);
    Returns 1 if c is lowercase
    Returns 0 otherwise
    FYI: The standard library provides a similar function: islower. Run man islower to learn more.

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower

Check output:

    julien@ubuntu:~/0x02$ ./3-islower

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 3-islower.c
    


### Task 4
#mandatory

Write a function that checks for alphabetic character.

    Prototype: int _isalpha(int c);
    Returns 1 if c is a letter, lowercase or uppercase
    Returns 0 otherwise
    FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha

Check output:

    julien@ubuntu:~/0x02$ ./4-isalpha

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 4-isalpha.c
    


### Task 5
#mandatory

Write a function that prints the sign of a number.

    Prototype: int print_sign(int n);
    Returns 1 and prints + if n is greater than zero
    Returns 0 and prints 0 if n is zero
    Returns -1 and prints - if n is less than zero

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign

Check output:

    julien@ubuntu:~/0x02$ ./5-sign
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 5-sign.c
    


### Task 6
#mandatory

Write a function that computes the absolute value of an integer.

    Prototype: int _abs(int);
    FYI: The standard library provides a similar function: abs. Run man abs to learn more.

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs

Check output:

    julien@ubuntu:~/0x02$ ./6-abs

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 6-abs.c
    


### Task 7
#mandatory

Write a function that prints the last digit of a number.

    Prototype: int print_last_digit(int);
    Returns the value of the last digit

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit

Check output:

    julien@ubuntu:~/0x02$ ./7-last_digit

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 7-print_last_digit.c
    


### Task 8
#mandatory

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

    Prototype: void jack_bauer(void);
    You can listen to this soundtrack while coding :)

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 8-24_hours.c
    


### Task 9
#mandatory

Write a function that prints the 9 times table, starting with 0.

    Prototype: void times_table(void);
    Format: see example

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
    julien@ubuntu:~/0x02$ ./9-times_table | cat -e
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 9-times_table.c
    


### Task 10
#mandatory

Write a function that adds two integers and returns the result.

    Prototype: int add(int, int);

Comipile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add

Check output:

    julien@ubuntu:~/0x02$ ./10-add

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 10-add.c
    


### Task 11
#mandatory

Write a function that prints all natural numbers from n to 98, followed by a new line.

    Prototype: void print_to_98(int n);
    Numbers must be separated by a comma, followed by a space
    Numbers should be printed in order
    The first printed number should be the number passed to your function
    The last printed number should be 98
    You are allowed to use the standard library

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98


Check output:

    julien@ubuntu:~/0x02$ ./11-98

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 11-print_to_98.c
    


### Task 12
#advanced

Write a function that prints the n times table, starting with 0.

    Prototype: void print_times_table(int n);
    If n is greater than 15 or less than 0 the function should not print anything
    Format: see example

Compile:

    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table

Check output:

    julien@ubuntu:~/0x02$ ./100-times_table
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 100-times_table.c
    


### Task 13
#advanced

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

    You are allowed to use the standard library

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 101-natural.c
    


### Task 14
#advanced

Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

    The numbers must be separated by comma, followed by a space , 
    You are allowed to use the standard library

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 102-fibonacci.c
    


### Task 15
#advanced

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

    You are allowed to use the standard library

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 103-fibonacci.c


    
### Task 16
#advanced

Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

    The numbers should be separated by comma, followed by a space
    You are allowed to use the standard library
    You are not allowed to use any other library (You can’t use GMP etc…)
    You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
    You are not allowed to hard code any Fibonacci number (except for 1 and 2)

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x02-functions_nested_loops
    File: 104-fibonacci.c
