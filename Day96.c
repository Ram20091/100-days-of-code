#include <stdio.h>

// Enum for Employee Department
enum Department {
    HR,
    IT,
    SALES,
    FINANCE
};

// Nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Main Employee structure containing nested Date and Enum
struct Employee {
    int id;
    char name[50];
    float salary;
    enum Department dept;
    struct Date joiningDate; // Nested structure
};

// Helper function to convert enum to readable text
const char* getDeptName(enum Department dept) {
    switch (dept) {
        case HR: return "Human Resources";
        case IT: return "Information Technology";
        case SALES: return "Sales";
        case FINANCE: return "Finance";
        default: return "Unknown";
    }
}

int main() {
    // Initialize Employee with nested Date details
    struct Employee emp = {
        1042,
        "Vikram Sharma",
        65000.00,
        IT,
        {15, 8, 2024} // Nested Date initialization (DD, MM, YYYY)
    };

    // Print Employee details
    printf("--- Employee Details ---\n");
    printf("ID           : %d\n", emp.id);
    printf("Name         : %s\n", emp.name);
    printf("Department   : %s\n", getDeptName(emp.dept));
    printf("Salary       : %.2f\n", emp.salary);
    
    // Access nested structure members using double dot (.) operators
    printf("Joining Date : %02d/%02d/%d\n", 
           emp.joiningDate.day, 
           emp.joiningDate.month, 
           emp.joiningDate.year);

    return 0;
}
