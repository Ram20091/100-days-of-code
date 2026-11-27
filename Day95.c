#include <stdio.h>
#include <string.h>

// Enum to represent student grade status
enum GradeStatus {
    FAIL,
    PASS,
    DISTINCTION
};

// Structure to hold student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
    enum GradeStatus status;
};

// Function that finds and returns the top student's structure
struct Student getTopStudent(struct Student students[], int count) {
    struct Student top = students[0]; // Assume first student is top initially

    for (int i = 1; i < count; i++) {
        if (students[i].marks > top.marks) {
            top = students[i]; // Update top student
        }
    }
    return top; // Return the entire structure
}

int main() {
    // Initialize an array of 3 students
    struct Student classList[3] = {
        {101, "Aarav", 78.5, PASS},
        {102, "Diya", 94.0, DISTINCTION},
        {103, "Rohan", 85.0, DISTINCTION}
    };

    // Call the function and store the returned structure
    struct Student topper = getTopStudent(classList, 3);

    // Display the top student's details
    printf("--- Top Student Details ---\n");
    printf("Roll No : %d\n", topper.rollNo);
    printf("Name    : %s\n", topper.name);
    printf("Marks   : %.2f\n", topper.marks);
    printf("Status  : %s\n", (topper.status == DISTINCTION) ? "Distinction" : "Pass");

    return 0;
}
