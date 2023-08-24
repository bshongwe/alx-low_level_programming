# 0x12. C - Singly linked lists

## General
-	When and why using linked lists vs arrays
-	How to build and use linked lists
-	The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
-	Don’t forget to push your header file
-	All your header files should be include guarded


# Tasks
## Task 0
#mandatory

Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 0-print_list.c


## 1. List length
#mandatory

Write a function that returns the number of elements in a linked list_t list.

    Prototype: size_t list_len(const list_t *h);

Test file: <code>1-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b</code>

Test checout: <code>./b</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 1-list_len.c
  

## Task 2
#mandatory

Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
-  Return: the address of the new element, or NULL if it failed
-  str needs to be duplicated
-  You are allowed to use <code>strdup</code>

Test file: <code>2-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c</code>

Test checkout: <code>./c</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 2-add_node.c
  

## Task 3
#mandatory

Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
-  Return: the address of the new element, or NULL if it failed
-  str needs to be duplicated
-  You are allowed to use strdup

Test file: <code>3-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d</code>

Test checkout: <code>./d</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 3-add_node_end.c
  

## Task 4
#mandatory
Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);

Test file: <code>4-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e</code>

Test checkout: <code>./e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 4-free_list.c
  

# Task 5
#advanced

Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

N. B.: The prototype that I used was not provided byt the task. Thus, any other could've been used.

You are allowed to use the printf function

Test file: <code>100-main.c</code>

Compile chekout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first</code>

Test chekout: <code>./first</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 100-first.c
  

## Task 6
#advanced

Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

-  You are only allowed to use the printf function
-  You are not allowed to use interrupts

Compile command (using nasm and gcc): <code>nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello</code>

Test checkout: <code>./hello</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x12-singly_linked_lists
    File: 101-hello_holberton.asm

