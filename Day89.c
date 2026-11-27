#include <stdio.h>

// 1. Define an enum with both default and custom integer values
enum Level {
    LOW = 1,
    MEDIUM,      // Automatically assigned 2
    HIGH = 10,   // Explicitly assigned 10
    CRITICAL     // Automatically assigned 11
};

int main() {
    // 2. Store an enum constant inside an enum variable and a regular int variable
    enum Level currentLevel = MEDIUM;
    int numericValue = HIGH;

    // 3. Print them as integers using %d
    printf("LOW = %d\n", LOW);
    printf("MEDIUM (via enum variable) = %d\n", currentLevel);
    printf("HIGH (via int variable) = %d\n", numericValue);
    printf("CRITICAL = %d\n", CRITICAL);

    // 4. Perform integer arithmetic to prove they behave just like integers
    printf("LOW + HIGH = %d\n", LOW + HIGH);

    return 0;
}
