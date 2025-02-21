#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to such in 
 * @needle: substring we looking for
 * Return : a pointer to the  beggining of the 
 * located substring , or null if the substring 
 * is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
