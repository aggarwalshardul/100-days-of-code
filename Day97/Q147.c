//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Employee {
    char name[MAX_NAME_LENGTH];
    int id;
    float salary;
};
int main() {
    struct Employee employee;
    FILE *file;

    // Input employee details
    printf("Enter Employee Name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    employee.name[strcspn(employee.name, "\n")] = 0; 
    printf("Enter Employee ID: ");
    scanf("%d", &employee.id);
    printf("Enter Employee Salary: ");
    scanf("%f", &employee.salary);

    // Write to binary file
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&employee, sizeof(struct Employee), 1, file);
    fclose(file);

    // Read from binary file
    struct Employee readEmployee;
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&readEmployee, sizeof(struct Employee), 1, file);
    fclose(file);

    // Display read employee details
    printf("Employee Details from File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", readEmployee.name, readEmployee.id, readEmployee.salary);

    return 0;
}
