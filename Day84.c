#include <stdio.h>

// 1. Define the enumeration for status codes
enum Status {
    SUCCESS, // 0
    FAILURE, // 1
    TIMEOUT  // 2
};

int main() {
    // 2. Declare a Status variable and assign a state
    enum Status currentStatus = SUCCESS;

    // 3. Print a message based on the status
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Error: Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Warning: Operation timed out. Please try again.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
