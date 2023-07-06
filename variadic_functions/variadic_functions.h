#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - struct type defining a printer
 * @symbol: symbol to rep a data type
 * @print: function pointer to a function that prints data type according to symb
 */

int sum_them_all(const unsigned int n, ...);

#endif
