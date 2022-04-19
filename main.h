#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *struct convert - defines a structure for symbols and functions
 *@sym: The operator
 *@f: The function associated
 */
struct convert
{
  char *sym;
  int (*f)(va_list);
};
typedef struct convert conver_t;

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
char print_char(va_list);
char print_string(va_list);
char print_percent(va_list);

#endif 
