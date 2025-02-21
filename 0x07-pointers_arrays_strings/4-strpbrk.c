#include "main.h"
/**
 * _strpbrk - locates the first occurence 
 * in strings for any set of bytes
 * @s: string to be searched
 * @accept: bytes in the string
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or null if no such byte
 * is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
