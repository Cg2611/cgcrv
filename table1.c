#include <stdio.h>
int main()
{
    int num,i=0;
    printf("Enter a number");
    scanf("%d", &num);
    printf("The tables of %d is:\n", num);
    for (; i < 11; i++)
    {
        printf("%d X %d =%d \n", num, i, num * i);
    }
    return 0;
}