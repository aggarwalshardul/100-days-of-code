//Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    float marks;
};
int areIdentical(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0) && (s1.roll_no == s2.roll_no) && (s1.marks == s2.marks);
}
int main() {
    struct Student student1, student2;

    // Input first student's details
    printf("Enter details for Student 1\n");
    printf("Enter Name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = 0; 
    printf("Enter Roll Number: ");
    scanf("%d", &student1.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &student1.marks);
    getchar(); 

    // Input second student's details
    printf("\nEnter details for Student 2\n");
    printf("Enter Name: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    student2.name[strcspn(student2.name, "\n")] = 0; 
    printf("Enter Roll Number: ");
    scanf("%d", &student2.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &student2.marks);

    // Check if identical
    if (areIdentical(student1, student2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are not identical.\n");
    }

    return 0;
}
