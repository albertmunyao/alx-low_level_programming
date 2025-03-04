#include "main.h"
#include <stdio.h>

int main(void)
{
    char s[] = "Hello";
    _puts(s);
    printf("Length of '%s': %d\n", s, _strlen(s));
    return (0);
}

