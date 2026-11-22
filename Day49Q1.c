#include <stdio.h>
int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    scanf(" %[^\n]", name);

    printf("Initials: ");

    if (name[0] >= 'a' && name[0] <= 'z') {
        printf("%c.", name[0] - 32);
    } else {
        printf("%c.", name[0]);
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            char ch = name[i + 1];
            
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            printf("%c.", ch);
        }
    }

    printf("\n");
    return 0;
}