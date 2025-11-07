//Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(const char *name) {
    char initials[100];
    int j = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            initials[j++] = toupper(name[i]);
            initials[j++] = '.';
        }
    }
    initials[j - 1] = '\0';  
    printf("%s\n", initials);
}
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  
    printInitials(name);
    return 0;
}
