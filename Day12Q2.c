#include <stdio.h>

int main() 
{
    float units, bill = 0;

    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    // Case 1: Invalid input (negative units)
    if (units < 0) {
        printf("Invalid input! Units consumed cannot be negative.\n");
    }
    // Case 2: First 100 units (0 to 100) at ₹5/unit
    else if (units <= 100) {
        bill = units * 5;
    }
    // Case 3: Next 100 units (101 to 200) at ₹7/unit
    else if (units <= 200) {
        // 100 units at ₹5 + remaining units at ₹7
        bill = (100 * 5) + ((units - 100) * 7);
    }
    // Case 4: Next 100 units (201 to 300) at ₹10/unit
    else if (units <= 300) {
        // 100 units at ₹5 + 100 units at ₹7 + remaining units at ₹10
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    // Case 5: Above 300 units at ₹12/unit
    else {
        // 100 units at ₹5 + 100 units at ₹7 + 100 units at ₹10 + remaining units at ₹12
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Print the final calculated bill
    if (units >= 0) {
        printf("Total Electricity Bill = ₹%.2f\n", bill);
    }

    return 0;
}