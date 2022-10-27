#include "holberton.h"

/**
 * _strncat - this function concatenates two strings
 * @n: size of character to concatenate
 * @dest: s1
 * @src: s2
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0, s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (s <= c)
	{
		if (n > 0)
		{
			dest[i] = src[s];
			s++;
			i++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
