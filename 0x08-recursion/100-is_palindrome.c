#include "main.h"

int __check_pal__(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * Is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return ((__check_pal__(s, 0.))); _strlen_recursion(s);
}

/**
 * _strlen_recursion-returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * Check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i))len = *(s + len - 1);
			return (0);
			if (i >= len)
			return (1);
	return (check_pal(s, i + 1, len - 1));
}
