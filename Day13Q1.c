#include <stdio.h>

int main() 
{
    char op;
    int num1, num2; // Using int to allow the modulus (%) operation

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // Note the space before %c to clear any leftover newline characters

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // switch-case checks the operator character
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            // Division Safety Check: Cannot divide by zero
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            // Modulus Safety Check: Cannot divide by zero
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error! Invalid operator entered.\n");
            break;
    }

    return 0;
}