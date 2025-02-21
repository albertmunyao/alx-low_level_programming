#include "main.h"

/**
 * -memcpy() - copies n bytes from 
 *  memory area src to memory area dest
 *  @src: source address
 *  @dest: destination address
 *  @n: number of bytes
 *  Return: a pointer to dest
 */

char *_memcpy(char *dest, const char *src, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

