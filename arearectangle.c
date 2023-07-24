#include <stdio.h>
int main()
{
    float l,b,area ;
    printf ("Enter the value of length l:");
    scanf ("%f",&l);
    printf ("Enter the value of breadth b:");
    scanf ("%f",&b);
    area = l*b;
    printf ("The area of the recatngle is %f", area);
    return 0;
}