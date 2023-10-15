#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...);
int write_function(char c);
int print_num(va_list arguments);
typedef int (*function_pointer)(va_list);

/* Printing functions prototypes*/
int char_print(va_list arguments);
int str_print(va_list arguments);
int per_print(__attribute__((unused))va_list arguments);
int int_print(va_list arguments);

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
int string_parser(const char *format, print my_list[], va_list arguments);
#endif
