#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        _printf("my printf function");
        return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * _prinf - prints a function that  produces output to a format
 * @format: character string 
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int x;
	char c ,*str;
	va_list list;

	va_start(list, format);

	while (*format)
		switch (*format++){
			case 's':
				s = va_arg(list, char *);
				printf("%s\n", s);
				break;
				
			case 'c':
				c = (char) va_arg(list, int);
				printf("char %c\n", c)
					break;
		}
	va_end(list);
}


