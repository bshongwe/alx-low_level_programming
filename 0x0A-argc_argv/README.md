# 0x0A. C - argc, argv

## Tasks
### Task 0
#mandatory

Write a program that prints its name, followed by a new line.

-  If you rename the program, it will print the new name, without having to compile it again
-  You should not remove the path before the name of the program

Compile command:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

Check compiled output:

    ./mynameis 

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0A-argc_argv
    File: 0-whatsmyname.c
    

### Task 1
#mandatory

Write a program that prints the number of arguments passed into it.
Your program should print a number, followed by a new line

Compile command:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs

Check output:

    ./nargs 

Test-check 1: <code>./nargs hello</code>
Output: <code>1</code>

Test-check 2: <code>./nargs "hello, world"</code>
Output: <code>1</code>

Test-check 3: <code>./nargs hello, world</code>
Output: <code>2</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0A-argc_argv
    File: 1-args.c
    

### Task 2
#mandatory

Write a program that prints all arguments it receives.

-  All arguments should be printed, including the first one
-  Only print one argument per line, ending with a new line

Compile command:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args

Check output:

    ./args 

Test-check:

    ./args You can do anything, but not everything.

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0A-argc_argv
    File: 2-args.c
    

### Task 3
#mandatory

Write a program that multiplies two numbers.

-  Your program should print the result of the multiplication, followed by a new line
-  You can assume that the two numbers and result of the multiplication can be stored in an integer
-  If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

Compile command:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul

Test-check:

    ./mul 2 3
Output: <code>6</code>

Test 1: <code>./mul 2 -3</code>
Output: <code>-6</code>

Test 2: <code>./mul 2 0</code>
Output: <code>0</code>

Test 3: <code>./mul 245 3245342</code>
Output: <code>795108790</code>

Test 4: <code>./mul</code>
Output: <code>Error</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0A-argc_argv
    File: 3-mul.c
    

### Task 4
#mandatory

Write a program that adds positive numbers.

-  Print the result, followed by a new line
-  If no number is passed to the program, print 0, followed by a new line
-  If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
-  You can assume that numbers and the addition of all the numbers can be stored in an int

Compile command:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add

Test-check: <code>./add 1 1</code>
Output: <code>2</code>

Test 1: <code>./add 1 10 100 1000</code>
Output: <code>1111</code>

Test 2: <code>./add 1 2 3 e 4 5</code>
Output: <code>Error</code>

Test 3: <code>./add</code>
Output: <code>0</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0A-argc_argv
    File: 4-add.c
    

### Task 5
#advanced

Write a program that prints the minimum number of coins to make change for an amount of money.

Usage: <code>./change cents</code>

    where cents is the amount of cents you need to give back
    if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
    you should use atoi to parse the parameter passed to your program
    If the number passed as the argument is negative, print 0, followed by a new line
    You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

Compile:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change

Test-check:

    ./change 
Output: <code>Error</code>

Test 1: <code>./change 10</code>
Output: <code>1</code>

Test 2: <code>./change 100</code>
Output: <code>4</code>

Test 3: <code>./change 101</code>
Output: <code>5</code>

Test 4: <code>./change 13</code>
Output: <code>3</code>

Repo:

    GitHub repository: alx-low_level_programming
    Directory: 0x0A-argc_argv
    File: 100-change.c



