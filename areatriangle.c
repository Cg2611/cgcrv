#include <stdio.h>
int main()
{
    float l,b,area;
    printf("Enter the length l:");
    scanf ("%f",&l);
    printf("Enter the length b");
    scanf ("%f",&b);
    area= 0.5*l*b;
    printf("Area of the triangle is: %f", area);
    return 0;
}