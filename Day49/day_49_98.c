//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
    int i = 0, count = 0;
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') count++;
    }
    int c = 0;
    printf("Output: ");
    printf("%c. ", toupper(name[0]));  
    for (i = 0; i < len; i++) {
        if (name[i] == ' ' && c < count - 1) {
            printf("%c. ", toupper(name[i + 1]));
            c++;
        }
    }
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            int j = i + 1;
            printf("%c", toupper(name[j])); 
            j++;
            while (name[j] != '\0') {
                printf("%c", tolower(name[j]));
                j++;
            }
            break;
        }
    }
    printf("\n");
    return 0;
}

