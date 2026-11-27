#include <stdio.h>
#include <string.h>

// 1. Define the enumeration for menu choices
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

int main() {
    char choiceStr[20];
    int num1, num2;
    enum Operation choice;

    // 2. Read operation name and two integers from the user (e.g., ADD 10 20)
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) and two numbers: ");
    scanf("%19s %d %d", choiceStr, &num1, &num2);

    // 3. Map the input text to the corresponding enum value
    if (strcmp(choiceStr, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(choiceStr, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(choiceStr, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    } else {
        choice = INVALID;
    }

    // 4. Perform the calculation using switch on the enum
    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}
