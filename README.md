# PRINTF FUNCTION
	This documentation details the making of a custom printf function.
This project is a collaboration between Ukeme Ikot and Kelvin Chukwuka at ALX Software Engineering on the 'Printf' function. We are coded this function from the standard input/output library(stdio.h).

__printf() is a function that performs formatted output conversion and print data to the output stream. Its prototype is:

	int _printf(const char *format, ...)

It is a variadic function, that receives n arguments that is replaced by ntags written inside the string *format.*

The return value is the amount of characters printed on success.
Specifier	Output
c		Character
d or i		Signed Decimal Integer
s		String of characters
b		Signed Binary
o		Signed Octal
u		Unsigned Integer
x		Unsigned Hexadecimal
X		Unsigned Hexadecimal (Uppercase)
p		Pointer Address
r		Reverse String of Characters
R		ROT13 Translation of String
S		String with Special Characters Replaced by their ASCII Value
%		Character
