#include "main.h"

/**
 * _strlen_recursion - the function that counts length of string
 *  @s: sring parameter
 *  Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s != '\0')
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
