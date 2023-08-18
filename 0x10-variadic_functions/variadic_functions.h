#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

/**
 * token - sturct
 *@t: char token
 *
 *@f: function pointer
 *
*/


typedef struct token
{
  char *t;
  void (*f)(char *, va_list);  
}token_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTION_H*/
