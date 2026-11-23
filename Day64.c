#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char s[]) {
    int n = strlen(s);
    int max_len = 0;

    for (int i = 0; i < n; i++) {

        int visited[256] = {0};
        int current_len = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            current_len++;

            if (current_len > max_len) {
                max_len = current_len;
            }
        }
    }

    return max_len;
}

int main() {
    char s[1000];


    printf("Enter a string: ");
    scanf("%s", s);

    int result = longestUniqueSubstring(s);
    printf("Output: %d\n", result);

    return 0;
}