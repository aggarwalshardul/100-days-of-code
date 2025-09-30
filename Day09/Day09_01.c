// Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include<math.h>
 int main(){
    
    int a,b,c;
    printf("Enter a b c");
    scanf("%d %d %d ",&a,&b,&c);
    double d=b*b-4*a*c;
    double root1=-b+sqrt(d)/2*a;
    double root2=-b-sqrt(d)/2*a;
    if(d>0)
        printf("Roots Are Real And Different %d %d",a,b);
    else if(d==0)
        printf("Roots Are Real and Same %d ",a);
    else 
        printf("Roots Are Complex %d %d",a,b);
    return 0;
}