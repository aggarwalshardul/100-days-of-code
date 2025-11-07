//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *word = strtok(sentence, " ");
    char *longest = word;

    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            longest = word;
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
