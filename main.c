#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i;
    int x;
    char str[100];

    printf("Please enter string:");
    gets(str);

    for(i = 0; (i < 100 && str[i] != '\0'); i++) {
        str[i] += 3;
    }
    printf("\nEncrypted String: %s\n", str);
}