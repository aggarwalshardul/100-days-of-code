//Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    char temp[100];
    strcpy(temp, str1);
    strcat(temp, str1);
    return strstr(temp, str2) != NULL;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
