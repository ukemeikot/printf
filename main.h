#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
typedef void (*function_pointer)(va_list arguments);
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
#endif
