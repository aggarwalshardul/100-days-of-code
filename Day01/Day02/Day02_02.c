//Write a program to calculate the area and circumference of a circle given its radius

#include<stdio.h>
int main(){
    
    #define PI 3.14
    float radius, area, circumference;

    printf("enter the radius of circle:");
    scanf("%f", &radius);
    
    //calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    printf("area of circle: %.2f\n", area);
    printf("cicumference of circle: %.2f\n", circumference);

    return 0;
    }