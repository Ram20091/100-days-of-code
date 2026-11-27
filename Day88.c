#include <stdio.h>

// 1. Define the enumeration (values default to 0, 1, 2)
enum Role {
    ADMIN,      // 0
    USER,       // 1
    GUEST,      // 2
    ROLE_COUNT  // 3 (Helpful trick to track the total number of items)
};

int main() {
    // 2. Create a matching array of string names in the exact same order
    const char *roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    // 3. Loop from 0 up to ROLE_COUNT - 1 and print each name and integer value
    for (int i = ADMIN; i < ROLE_COUNT; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
