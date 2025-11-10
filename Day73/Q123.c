//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>  
int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else {
            if (inWord == 0) {
                wordCount++;
                inWord = 1;
            }
        }
    }

    // If the file is not empty, count the last line if it doesn't end with a newline
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(file);

    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}
