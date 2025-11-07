//Q114: Write a program to take a string s as input. 
//The task is to find the length of the longest substring without repeating characters. 
//Print the length as output.

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int freq[MAX_CHAR] = {0};
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < n) {
        freq[(unsigned char)s[right]]++;
        
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }
        int windowLen = right - left + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;

        right++;
    }
    return maxLen;
}
int main() {
    char s[1000];

    printf("Enter the string: ");
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}