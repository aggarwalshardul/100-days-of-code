// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    
    int n;
    printf("Enter The Number ");
    scanf("%d",&n);
    if(n>=0){
      if(n==0)
        printf("The number is zero");

      else
       printf("The number is Positive");
    }
    else{
        printf("The Number is Negative");
    }
    return 0;
}