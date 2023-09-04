#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/*New discoveries */
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/* Mandatory prototypes */
int _puthar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Advanced tasks */
int main(int argc, char *argv[]);

/* Helper */
int _strlen(char *s);
void error_handler(int exit_code, char *message, char type, ...);

#endif /* end of MAIN_H file */
