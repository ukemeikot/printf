#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
int write_function(char c);
int print_num(va_list arguments);
typedef int (*function_pointer)(va_list);

/* Printing functions prototypes*/
int char_print(va_list arguments, char *, int *);
int str_print(va_list arguments, char *, int *);
int per_print(__attribute__((unused))va_list arguments, char *, int *);
int int_print(va_list arguments, char *, int *);
void buffer_checker(char *b, int *a, int *tmp);
void str_help(char *formar, int *i, char *bf, char *bd);
/**
 * struct func_list - contains all the printing
 * functions
 * @s: the identifier character
 * @printers: the prnting function
 */
typedef struct func_list
{
	char *s;
	function_pointer printers;
} print;
int string(const char *format, print my_list[], va_list arg, char *b, int *a);
int print_binary(va_list arguments, char *, int *);
int u_int_print(va_list arguments, char *, int *);
int oct_print(va_list arguments, char *, int *);
int hex_print(va_list arguments, char *, int *);
int heX_print(va_list arguments, char *, int *);
#endif
