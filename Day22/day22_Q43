// Q43: Write a program to check if a number is a strong number.

#include<stdio.h>

    int fact(int a)
    {
        int factorial=1;
        for(int i=1;i<=a;i++){
            factorial=factorial*i;
        }
        return factorial;
    }
int main(){
int n;
printf("Enter The Number");
scanf("%d",&n);
int temp=n;
int lastdigit;
int strongnumber=0;
while(n!=0){
    lastdigit=n%10;
    strongnumber=strongnumber+fact(lastdigit);
    n=n/10;
}
if(temp==strongnumber){
    printf("Strong Number");
}
else{
    printf("Not Strong Number");
}
    return 0;
}