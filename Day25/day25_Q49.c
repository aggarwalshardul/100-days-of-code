/* Q49: Write a program to print the following pattern:
5
45
345
2345
12345
*/
#include<stdio.h>
int main(){
    for(int j=5;j>=1;j--){
        for(int i=j;i<=5;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}