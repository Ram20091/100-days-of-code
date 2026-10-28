#include <stdio.h>

int main() 
{
    int days;
    float fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    // Case 1: No fine if returned on time or early
    if (days <= 0) {
        printf("No fine. Thank you for returning the book on time!\n");
    }
    // Case 2: First 5 days (1 to 5)
    else if (days <= 5) {
        fine = days * 2;
        printf("Total Fine: ₹%.2f\n", fine);
    }
    // Case 3: Next 5 days (6 to 10)
    else if (days <= 10) {
        // 5 days at ₹2/day + remaining days at ₹4/day
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%.2f\n", fine);
    }
    // Case 4: Next 20 days (11 to 30)
    else if (days <= 30) {
        // 5 days at ₹2 + 5 days at ₹4 + remaining days at ₹6/day
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%.2f\n", fine);
    }
    // Case 5: More than 30 days
    else {
        printf("Late days exceeded 30 days. Membership Cancelled!\n");
    }

    return 0;
}