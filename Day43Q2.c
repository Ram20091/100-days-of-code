#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length, i;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str); 

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; 
            break;            
        }
    }

    if (isPalindrome == 1) {
        printf("%s is a Palindrome.\n", str);
    } else {
        printf("%s is NOT a Palindrome.\n", str);
    }

    return 0;
}