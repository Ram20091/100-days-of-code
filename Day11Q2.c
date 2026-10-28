#include <stdio.h>

int main() 
{
    float cost_price, selling_price;
    float profit, loss, percentage;

    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);

    // Case 1: Selling Price is greater than Cost Price -> Profit
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        // Formula: (Profit / CP) * 100
        percentage = (profit / cost_price) * 100;
        
        printf("Result: Profit\n");
        printf("Profit Amount = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    // Case 2: Cost Price is greater than Selling Price -> Loss
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        // Formula: (Loss / CP) * 100
        percentage = (loss / cost_price) * 100;
        
        printf("Result: Loss\n");
        printf("Loss Amount = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    // Case 3: Both prices are equal -> No Profit, No Loss
    else {
        printf("Result: No Profit, No Loss (Break-even).\n");
    }

    return 0;
}