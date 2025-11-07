//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int len = strlen(sentence);
    if (sentence[len-1] == '\n') {
        sentence[len-1] = '\0';
        len--;
    }
    char *word_start = sentence;
    char *temp = sentence;

    while (*temp) {
        if (*temp == ' ' || *(temp + 1) == '\0') {
            char *end = (*temp == ' ') ? temp - 1 : temp;
            reverseWord(word_start, end);
            word_start = temp + 1;
        }
        temp++;
    }

    printf("Output: %s\n", sentence);
    return 0;
}
