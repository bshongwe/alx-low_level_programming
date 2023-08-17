# 0x0D. C - Preprocessor

### General
What are macros and how to use them
What are the most common predefined macros
How to include guard your header files


# Tasks
## Task 0
#mandatory

Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a</code>
Test output: <code>./a</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0D-preprocessor
    File: 0-object_like_macro.h
   

## Task 1
#mandatory

Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b</code>
Test checkout: <code>./b</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0D-preprocessor
    File: 1-pi.h
   

## Task 2
#mandatory

Write a program that prints the name of the file it was compiled from, followed by a new line.
You are allowed to use the standard library

#### Test 1
Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c</code>
Test checkout: <code>./c</code>

#### Test 2
Run this: <code>cp 2-main.c 02-main.c</code>
Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc</code>
Test checkout: <code>./cc</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0D-preprocessor
    File: 2-main.c
    

## Task 3
#mandatory

Write a function-like macro ABS(x) that computes the absolute value of a number x.

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d</code>
Test checkout: <code>./d</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0D-preprocessor
    File: 3-function_like_macro.h
   

## Task 4
#mandatory

Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e</code>
Test checkout: <code>./e</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0D-preprocessor
    File: 4-sum.h

