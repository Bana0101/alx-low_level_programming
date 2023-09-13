#include "function_pointers.h"

/**
 * print_name - a function that print a name
 * @name: the name to print
 * @f: the function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
