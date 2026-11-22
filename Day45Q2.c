#include <stdio.h>
#include <ctype.h>
void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];
        if (isupper(c)) {
            str[i] = tolower(c);
        } else if (islower(c)) {
            str[i] = toupper(c);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) != NULL) {
        toggleCase(str);
        printf("Toggled string: %s", str);
    }

    return 0;
}