#include <stdio.h>

// 1. Define the enumeration for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// 2. Define a struct that includes enum Gender as a member
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // 3. Create and initialize a Person struct variable
    struct Person p1 = {"Aarav", 24, MALE};

    // 4. Print the person's name, age, and gender
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: ");

    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Not specified\n");
    }

    return 0;
}
