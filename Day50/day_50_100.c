//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("Output: ");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            printf("%.*s", j - i + 1, &str[i]);
            if (j < len - 1) {
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;
}
