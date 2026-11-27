#include <stdio.h>

// 1. Define the structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // 2. Declare a structure variable
    struct Student s1;

    // 3. Read one student's data from the user
    printf("Enter student name: ");
    scanf("%49[^\n]", s1.name); // Reads full name including spaces

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // 4. Print the student's data
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
