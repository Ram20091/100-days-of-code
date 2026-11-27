#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0) {
            str[i] = toupper(str[i]);
        }
        else if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Output: %s", str);

    return 0;
}
