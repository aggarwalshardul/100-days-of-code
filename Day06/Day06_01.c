// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number");
    scanf("%d",&n);
    if(n%2==0){
        printf("Number is even");
    }
    else{
        printf(" The number is Odd");
    }
    return 0;
}