#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_function - prints an input into the stdout
* @format: the format string
* Return: number of bytes printed
*/
}
int_printf(const char *format, ...)
}{
	va_list args;
	int num_chars = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if(*format == '%')
		{
	format++; // move past '%'

	switch (*format)
	{
	case 'c':
	num_chars += printf("%c", va_arg(args, int));
	break;

	case 's':
	num_chars += printf("%s", va_arg(args, char *);
	break;

	case '%':

	num_chars += printf("%%");
	break;
	default:

// unsupported conversion specifier
	
	num_chars += printf("?");
	 break;
	 }
	format++;
	 }
		 va_end(args);
		 return num_chars;
	}
	int main(void)
	{
	printf("%c %s %%\n", 'A', "example");
	// Output: A example %
	return 0;
	}
