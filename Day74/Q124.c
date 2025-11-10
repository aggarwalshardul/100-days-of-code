//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;


    printf("Enter source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter destination filename: ");
    scanf("%s", destFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from %s to %s successfully!\n", sourceFilename, destFilename);
    return 0;
}