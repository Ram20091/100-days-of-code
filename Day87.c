#include <stdio.h>
#include <string.h>

// 1. Define the enumeration for user roles
enum Role {
    ADMIN,
    USER,
    GUEST,
    UNKNOWN
};

int main() {
    char roleInput;
    enum Role currentRole;

    // 2. Ask the user to enter their role
    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%19s", roleInput);

    // 3. Match the text input to the corresponding enum value
    if (strcmp(roleInput, "ADMIN") == 0) {
        currentRole = ADMIN;
    } else if (strcmp(roleInput, "USER") == 0) {
        currentRole = USER;
    } else if (strcmp(roleInput, "GUEST") == 0) {
        currentRole = GUEST;
    } else {
        currentRole = UNKNOWN;
    }

    // 4. Display a message based on the enum value
    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin! You have full system access.\n");
            break;
        case USER:
            printf("Welcome User! You can view and edit your profile.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role entered.\n");
    }

    return 0;
}
