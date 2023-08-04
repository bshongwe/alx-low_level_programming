#!/bin/bash
gcc -Wall -Wextra -Werror -peddantic -c *.c
ar rc liball.a *.o
