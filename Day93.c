#include <stdio.h>

// 1. Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, topperIndex = 0;

    // 2. Read details for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // 3. Find the index of the student with the highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // 4. Print the student with the highest marks
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[topperIndex].name);
    printf("Roll No: %d\n", students[topperIndex].roll_no);
    printf("Marks: %.2f\n", students[topperIndex].marks);

    return 0;
}
