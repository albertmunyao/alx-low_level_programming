#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char array[10];
    _memset(array, 'A', 10);

    // Print the result to verify
    for (int i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }
    return 0;
}

