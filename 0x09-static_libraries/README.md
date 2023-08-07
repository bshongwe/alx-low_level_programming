# 0x09. C - Static libraries

## General
    What is a static library, how does it work, how to create one, and how to use it
    Basic usage of ar, ranlib, nm

## Tasks
### Task 0
#mandatory

Create the static library libmy.a containing all the functions listed below:

    int _putchar(char c);
    int _islower(int c);
    int _isalpha(int c);
    int _abs(int n);
    int _isupper(int c);
    int _isdigit(int c);
    int _strlen(char *s);
    void _puts(char *s);
    char *_strcpy(char *dest, char *src);
    int _atoi(char *s);
    char *_strcat(char *dest, char *src);
    char *_strncat(char *dest, char *src, int n);
    char *_strncpy(char *dest, char *src, int n);
    int _strcmp(char *s1, char *s2);
    char *_memset(char *s, char b, unsigned int n);
    char *_memcpy(char *dest, char *src, unsigned int n);
    char *_strchr(char *s, char c);
    unsigned int _strspn(char *s, char *accept);
    char *_strpbrk(char *s, char *accept);
    char *_strstr(char *haystack, char *needle);
    If you haven’t coded all of the above functions create empty ones with the right prototype.

Command to run after all has been set up: <code>nm libmy.a</code>

Create this <code>main.c</code> file after you're done:

    #include "main.h"

    int main(void)
    {
        _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
        return (0);
    }

Thereafter, run this command to produce the quote file:

    gcc -std=gnu89 main.c -L. -lmy -o quote

To test for the correct quote file contents, run this command: <code>./quote</code>

and this should be th output from that command:

    "At the end of the day, my goal was to be the best hacker"
        - Kevin Mitnick

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x09-static_libraries
    File: libmy.a, main.h
   

### Task 1
#mandatory
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

a) List all C files using <code>ls *.c</code>

b) Creating create_static_lib.sh using <code>./create_static_lib.sh</code>

c) Find the <code>liball.a</code> file using <code>ls *.a</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x09-static_libraries
    File: create_static_lib.sh


