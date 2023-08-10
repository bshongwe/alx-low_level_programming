# 0x03. C - Debugging

## General
    What is debugging
    What are some methods of debugging manually
    How to read the error messages

## Resources
Read or watch:

Debugging:

    https://en.wikipedia.org/wiki/Debugging

Rubber Duck Debugging:

    https://www.thoughtfulcode.com/rubber-duck-debugging-psychology

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.


## General
    What is debugging
    What are some methods of debugging manually
    How to read the error messages


### Task 0
#mandatory

In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

Compile:

    carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c

Check output:

    carrie@ubuntu:/debugging$ ./a.out

Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0. You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

    You only need to upload 0-main.c and main.h for this task.
    We will provide our own positive_or_negative() function.
    You are not allowed to add or remove lines of code, you may change only one line in this task.

Compile:

    carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main

Check output:

    carrie@ubuntu:/debugging$ ./0-main

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 0-main.c, main.h
   


### Task 1
#mandatory

Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

    Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
    You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 1-main.c
    


### Task 2
#mandatory

This program prints the largest of three integers.

Compile:

    carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main

Check output:

    carrie@ubuntu:/debugging$ ./2-main

Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
Line count will not be checked for this task.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 2-largest_number.c, main.h
    


### Task 3
#mandatory

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

###### 1. For 04/01/1997:
Compile:

    carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a

Check output:

    carrie@ubuntu:/debugging$ ./3-main_a


###### 2. Make a new main file 3-main_b.c to try a case that is a leap year: 02/29/2000:
Compile:

    carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b

Check output:

    carrie@ubuntu:/debugging$ ./3-main_b

Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 3-print_remaining_days.c, main.h


### Additional Notes:
I added files for some some of the tasks for test purposes

