#include <stdio.h>

// 1. Define the enum with an explicit starting value of 10
enum Letters {
    A = 10, // Explicitly set to 10
    B,      // Automatically becomes 11
    C       // Automatically becomes 12
};

int main() {
    // 2. Print each enum constant and its integer value
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
