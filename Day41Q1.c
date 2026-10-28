#include <stdio.h>

int main() {
    char str[] = "Hello";
    int count = 0;
    while (str[count] != '\0') {
        count++; 
    }

    printf("Total characters: %d\n", count);

    return 0;
}