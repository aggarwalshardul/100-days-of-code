//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[MAX_NAME_LENGTH];
    int id;
    struct Date joiningDate;
};
int main() {
    struct Employee employee;
    printf("Enter Employee Name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    employee.name[strcspn(employee.name, "\n")] = 0; 
    printf("Enter Employee ID: ");
    scanf("%d", &employee.id);
    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &employee.joiningDate.day, &employee.joiningDate.month, &employee.joiningDate.year);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", employee.name, employee.id, employee.joiningDate.day, employee.joiningDate.month, employee.joiningDate.year);
    return 0;
}