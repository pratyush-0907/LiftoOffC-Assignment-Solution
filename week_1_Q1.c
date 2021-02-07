#include<iostream>
int main()
{
    float a,b;
    printf("Enter the 1st number:");
    scanf(" %f", &a);
    printf("Enter the 2nd number:");
    scanf("%f",&b);
    printf("Sum=%.1f\nMultiplication=%.1f\nSubtraction=%.1f",a+b,a*b,a/b,1-b);
    return 0;



}