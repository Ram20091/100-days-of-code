#include <stdio.h>

// 1. Define the enumeration for the 12 months (starting at 1)
enum Month {
    JANUARY = 1,
    FEBRUARY,   // 2
    MARCH,      // 3
    APRIL,      // 4
    MAY,        // 5
    JUNE,       // 6
    JULY,       // 7
    AUGUST,     // 8
    SEPTEMBER,  // 9
    OCTOBER,    // 10
    NOVEMBER,   // 11
    DECEMBER    // 12
};

int main() {
    // Array of month names (index 0 is empty so index 1 matches JANUARY)
    const char *monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // 2. Loop through all months from JANUARY (1) to DECEMBER (12)
    for (int m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("%s: 31 days\n", monthNames[m]);
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("%s: 30 days\n", monthNames[m]);
                break;

            case FEBRUARY:
                printf("%s: 28 days (29 in a leap year)\n", monthNames[m]);
                break;
        }
    }

    return 0;
}
