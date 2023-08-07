# 0x0B. C - malloc, free

## General
    What is the difference between automatic and dynamic allocation
    What is malloc and free and how to use them
    Why and when use malloc
    How to use valgrind to check for memory leak

## Tasks
### Tasks 0
#mandatory

Write a function that creates an array of chars, and initializes it with a specific char.

    Prototype: char *create_array(unsigned int size, char c);
-  Returns NULL if size = 0
-  Returns a pointer to the array, or NULL if it fails

Testing file: <code>0-main.c</code>

Comiple checkout command:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a

Test checkout: <code>./a</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 0-create_array.c
   

### Task 1
#mandatory

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    Prototype: char *_strdup(char *str);
  The _strdup() function returns a pointer to a new string which is a duplicate of the string str.
  Memory for the new string is obtained with malloc, and can be freed with free.
-  Returns NULL if str = NULL
-  On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

Test file: <code>1-main.c</code>

Comiple checkout:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s

Test checkout: <code>./s</code>

Output: <code>ALX SE</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 1-strdup.c
   

### Task 2
#mandatory

Write a function that concatenates two strings.

    Prototype: char *str_concat(char *s1, char *s2);
-  The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
-  if NULL is passed, treat it as an empty string
-  The function should return NULL on failure

Test file: <code>2-main.c</code>

Compile checkout:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c

Test checkout: <code>./c | cat -e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 2-str_concat.c
   

### Task 3
#mandatory

Write a function that returns a pointer to a 2 dimensional array of integers.

    Prototype: int **alloc_grid(int width, int height);
-  Each element of the grid should be initialized to 0
-  The function should return NULL on failure
-  If width or height is 0 or negative, return NULL

Test file: <code>3-main.c</code>

Compile checkout:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g

Test checkout: <code>./g</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 3-alloc_grid.c
   

### Task 4
#mandatory

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

    Prototype: void free_grid(int **grid, int height);
-  Note that we will compile with your alloc_grid.c file. Make sure it compiles.

Test file: <code>4-main.c</code>

Compile checkout:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f

Test checout: <code>./f</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 4-free_grid.c
   

### Task 5
#advanced

Write a function that concatenates all the arguments of your program.

    Prototype: char *argstostr(int ac, char **av);
-  Returns NULL if ac == 0 or av == NULL
-  Returns a pointer to a new string, or NULL if it fails
-  Each argument should be followed by a \n in the new string

Test file: <code>100-main.c</code>

Compile checkout:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args

Test checout: <code>./args I will "show you" how great I am</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 100-argstostr.c
   

### Task 6
#advanced

Write a function that splits a string into words.

    Prototype: char **strtow(char *str);
-  The function returns a pointer to an array of strings (words)
-  Each element of this array should contain a single word, null-terminated
-  The last element of the returned array should be NULL
-  Words are separated by spaces
-  Returns NULL if str == NULL or str == ""
-  If your function fails, it should return NULL

Test file: <code>101-main.c</code>

Compile checkout:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow

Test checkout: <code>./strtow | cat -e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0B-malloc_free
    File: 101-strtow.c


