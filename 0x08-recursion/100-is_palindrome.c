#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: input string
 * Return: integer
*/
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: input string
 * @c: input string
 * Return: 0 or 1
*/
int palindrome(char *s, char *c)
{
	int i = _strlen_recursion(c), j = _strlen_recursion(s);

	if (*(s + 1) == '\0')
		return (1);
	if (*s == *(s + 2 * j - 1 - i))
	{
		s++;
		return (palindrome(s, c));
	}
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: input string
 * Return: integer
*/
int is_palindrome(char *s)
{
	return (palindrome(s, s));
}

