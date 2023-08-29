# 0x13. C - More singly linked lists

## General
-  How to use linked lists
-  Start to look for the right source of information without too much help
-  Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-  You are not allowed to use global variables
-  No more than 5 functions per file
-  The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
-  You are allowed to use _putchar
-  You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
-  In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
-  The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
-  Don’t forget to push your header file
-  All your header files should be include guarded

#Tasks
## Task 0
#mandatory

Write a function that prints all the elements of a listint_t list.

    Prototype: size_t print_listint(const listint_t *h);
    Return: the number of nodes

You are allowed to use printf

Test file: <code>0-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a</code>

Test checkout: <code>./a</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 0-print_listint.c
  

## Task 1
#mandatory

Write a function that returns the number of elements in a linked listint_t list.

    Prototype: size_t listint_len(const listint_t *h);

Test file: <code>1-main.c</code>

compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b</code>

Test checkout: <code>./b</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 1-listint_len.c
  

## Task 2
#mandatory

Write a function that adds a new node at the beginning of a listint_t list.

    Prototype: listint_t *add_nodeint(listint_t **head, const int n);
    Return: the address of the new element, or NULL if it failed

Test file: <code>2-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c</code>

Test checkout: <code>./c</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 2-add_nodeint.c
  

## Task 3
#mandatory

Write a function that adds a new node at the end of a listint_t list.

    Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
    Return: the address of the new element, or NULL if it failed

Test files: <code>3-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d</code>

Test checout: <code>./d</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 3-add_nodeint_end.c
  

## Task 4
#mandatory

Write a function that frees a listint_t list.

    Prototype: void free_listint(listint_t *head);

Test files: <code>4-main.c</code>

Compile checout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e</code>

Test checkout: <code>valgrind ./e</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 4-free_listint.c
  

## Task 5
#mandatory

Write a function that frees a listint_t list.

    Prototype: void free_listint2(listint_t **head);
    The function sets the head to NULL

Test file: <code>5-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f</code>

Test checkout: <code>valgrind ./f</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 5-free_listint2.c
  

## Task 6
#mandatory

Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

    Prototype: int pop_listint(listint_t **head);
    if the linked list is empty return 0

Test file: <code>6-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g</code>

Test checkout: <code>valgrind ./g</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 6-pop_listint.c
  

## Task 7
#mandatory

Write a function that returns the nth node of a listint_t linked list.

    Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
    where index is the index of the node, starting at 0
    if the node does not exist, return NULL

Test file: <code>7-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h</code>

Test checkout: <code>./h</code>

Repo:

    GitHub repository: alx-low_level_programming
      Directory: 0x13-more_singly_linked_lists
    File: 7-get_nodeint.c
  

## Task 8
#mandatory

Write a function that returns the sum of all the data (n) of a listint_t linked list.

    Prototype: int sum_listint(listint_t *head);
    if the list is empty, return 0

Test file: <code>8-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i</code>

Test checkout: <code>./i</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 8-sum_listint.c
  

## Task 9
#mandatory

Write a function that inserts a new node at a given position.

    Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
    where idx is the index of the list where the new node should be added. Index starts at 0
    Returns: the address of the new node, or NULL if it failed
    if it is not possible to add the new node at index idx, do not add the new node and return NULL

Test file: <code>9-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j</code>

Test checkout: <code>./j</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 9-insert_nodeint.c
  

## Task 10
#mandatory

Write a function that deletes the node at index index of a listint_t linked list.

    Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
    where index is the index of the node that should be deleted. Index starts at 0
    Returns: 1 if it succeeded, -1 if it failed

Test file: <code>10-main.c</code>
Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k</code>

Test checkout: <code>valgrind ./k</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 10-delete_nodeint.c
  

## Task 11
#advanced

Write a function that reverses a listint_t linked list.

    Prototype: listint_t *reverse_listint(listint_t **head);
    Returns: a pointer to the first node of the reversed list
    You are not allowed to use more than 1 loop.
    You are not allowed to use malloc, free or arrays
    You can only declare a maximum of two variables in your function

Test file: <code>100-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l</code>

Test checkout: <code>valgrind ./l</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 100-reverse_listint.c
  

## Task 12
#advanced

Write a function that prints a listint_t linked list.

    Prototype: size_t print_listint_safe(const listint_t *head);
    Returns: the number of nodes in the list
    This function can print lists with a loop
    You should go through the list only once
    If the function fails, exit the program with status 98

Test file: <code>101-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m</code>

Test checkout: <code>./m</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 101-print_listint_safe.c
  

## Task 13
#advanced

Write a function that frees a listint_t list.

    Prototype: size_t free_listint_safe(listint_t **h);
    This function can free lists with a loop
    You should go though the list only once
    Returns: the size of the list that was free’d
    The function sets the head to NULL

Test file: <code>102-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n</code>

Test checkout: <code>./n</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 102-free_listint_safe.c
  

## Task 14
#advanced

Write a function that finds the loop in a linked list.

    Prototype: listint_t *find_listint_loop(listint_t *head);
    Returns: The address of the node where the loop starts, or NULL if there is no loop
    You are not allowed to use malloc, free or arrays
    You can only declare a maximum of two variables in your function

Test file: <code>103-main.c</code>

Compile checkout: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o</code>

Test ccheckout: <code>./o</code>
 
Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x13-more_singly_linked_lists
    File: 103-find_loop.c


## N. B.
I used an additional struct for the advanced tests

I'm also trying to research on the inclusion and exclusion of main.h on the _putchar.c file since I did not use it anyways
