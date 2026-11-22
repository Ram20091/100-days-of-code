#include <stdio.h>
int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    scanf(" %[^\n]", name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Formatted Name: ");

    if (name[0] >= 'a' && name[0] <= 'z') {
        printf("%c. ", name[0] - 32);
    } else {
        printf("%c. ", name[0]);
    }
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ') {
            char ch = name[i + 1];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            printf("%c. ", ch);
        }
    }
    for (i = lastSpace + 1; name[i] != '\0'; i++) {
        if (i == lastSpace + 1 && name[i] >= 'a' && name[i] <= 'z') {
            printf("%c", name[i] - 32);
        } else {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}