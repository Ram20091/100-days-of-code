#include <stdio.h>

// 1. Define the enum for Department/Stream
enum Department {
    CSE,
    ECE,
    MECH
};

// 2. Define the structure containing standard members and an enum member
struct Student {
    char name;
    int roll_no;
    enum Department dept;
};

// 3. Function that accepts the structure as a parameter and prints its members
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Department: ");

    switch (s.dept) {
        case CSE:
            printf("Computer Science (CSE)\n");
            break;
        case ECE:
            printf("Electronics (ECE)\n");
            break;
        case MECH:
            printf("Mechanical (MECH)\n");
            break;
        default:
            printf("Unknown\n");
    }
}

int main() {
    // 4. Create and initialize a Student structure variable
    struct Student s1 = {"Rohan Sharma", 108, CSE};

    // 5. Pass the structure to the function
    displayStudent(s1);

    return 0;
}
