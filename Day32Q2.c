#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    int freq[10] = {0}; 

    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    num = llabs(num);
    if (num == 0) {
        freq[0] = 1;
    }
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
    int maxDigit = 0;
    int maxCount = freq[0];

    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}