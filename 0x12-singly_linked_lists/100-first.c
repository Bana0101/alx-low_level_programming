#include "lists.h"

void print_message(void) __attribute__ ((constructor));
/**
 * print_message - print a text before the main function is executed.
 * Return: void
 */


void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
