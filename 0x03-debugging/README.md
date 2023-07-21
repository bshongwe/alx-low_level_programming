# 0x03-debugging

## Resources
Read or watch:

Debugging (<code>https://en.wikipedia.org/wiki/Debugging</code>)
Rubber Duck Debugging (<code>https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/</code>)

    Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.


## General
    What is debugging
    What are some methods of debugging manually
    How to read the error messages


### Task 0
#mandatory

In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

<code>carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}</code>

<code>carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */</code>

Compile:
<code>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c</code>

Check output:
<code>carrie@ubuntu:/debugging$ ./a.out</code>

Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0. You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

    You only need to upload 0-main.c and main.h for this task.
    We will provide our own positive_or_negative() function.
    You are not allowed to add or remove lines of code, you may change only one line in this task.

Compile:
<code>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main</code>

Check output:
<code>carrie@ubuntu:/debugging$ ./0-main</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 0-main.c, main.h
   


### Task 1
#mandatory

Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

    Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
    You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

<code>carrie@ubuntu:/debugging$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 1-main.c
    


### Task 2
#mandatory

This program prints the largest of three integers.

<code>carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}</code>

Check output:
<code>carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}</code>

Compile:
<code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main</code>

Check output:
<code>carrie@ubuntu:/debugging$ ./2-main</code>

    Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
    Line count will not be checked for this task.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x03-debugging
    File: 2-largest_number.c, main.h
    


### Task 3
#mandatory

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

#### 3-main_a.c
<code>carrie@ubuntu:/debugging$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}</code>

#### 3-convert_day.c
<code>carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}</code>

#### 3-print_remaining_days.c
<code>carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}</code>

###### 1. For 04/01/1997:
    Compile:
<code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a</code>

    Check output:
<code>carrie@ubuntu:/debugging$ ./3-main_a</code>


###### 2. Make a new main file 3-main_b.c to try a case that is a leap year: 02/29/2000:
    Compile:
<code>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b</code>

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

