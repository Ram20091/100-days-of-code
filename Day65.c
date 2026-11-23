#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    if (strlen(s) != strlen(t)) {
        return 0;
    }
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char s[100], t[100];

    printf("Enter first string s: ");
    scanf("%99s", s);

    printf("Enter second string t: ");
    scanf("%99s", t);

    if (isAnagram(s, t)) {
        printf("Output: Anagram\n");
    } else {
        printf("Output: Not Anagram\n");
    }

    return 0;
}
