#include <stdio.h>
int main()
{
    int a, b, z;
    printf("Enter two numbers");
    scanf("%d %d ", &a, &b);
    z = (a > b) ? a : b;
    printf("The largest number is %d", z);
    return 0;
}