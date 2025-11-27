//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    float marks;
};
int main() {
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = 0; 
    printf("Enter Roll Number: ");
    scanf("%d", &student->roll_no);
    printf("Enter Marks: ");
    scanf("%f", &student->marks);

    printf("Name: %s | Roll: %d | Marks: %.2f\n", student->name, student->roll_no, student->marks);

    free(student);
    return 0;
}
