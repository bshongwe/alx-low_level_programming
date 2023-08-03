# alx-low_level_programming

## General

    Why C programming is awesome
    Who invented C
    Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
    What happens when you type gcc main.c
    What is an entry point
    What is main
    How to print text using printf, puts and putchar
    How to get the size of a specific type using the unary operator sizeof
    How to compile using gcc
    What is the default program name when compiling with gcc
    What is the official C coding style and how to check your code with betty-style
    How to find the right header to include in your source code when using a standard library function
    How does the main function influence the return value of the program

## Requirements
### C

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file at the root of the repo, containing a description of the repository
    A README.md file, at the root of the folder of this project, containing a description of the project
    There should be no errors and no warnings during compilation
    You are not allowed to use system
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Betty linter
To run the Betty linter just with command betty <filename>:

Go to the Betty repository
Clone the repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:

<code>
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done</code>

Once saved, exit file and change permissions to apply to all users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!

## Projects:
    0x00-hello_world
    0x01-variables_if_else_while
    0x02-functions_nested_loops
    0x03-debugging
    0x04-more_functions_nested_loops
    0x05-pointers_arrays_strings
    0x06-pointers_arrays_string
    0x07. C - Even more pointers, arrays and strings
    0x08. C - Recursion

