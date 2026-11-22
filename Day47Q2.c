
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "C programming is very interesting";
    char longest[50] = "";
    char current[50] = "";
    
    int j = 0; 
    int maxLen = 0;
    int len = strlen(sentence);

    for (int i = 0; i <= len; i++) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            current[j] = '\0'; 
            
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, current);
            }
            
            j = 0; 
        } else {
            
            current[j] = sentence[i];
            j++;
        }
    }

    printf("Sentence: %s\n", sentence);
    printf("Longest word: %s\n", longest);
    printf("Length: %d characters\n", maxLen);

    return 0;
}