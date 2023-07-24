#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("The value is 1");
        break;
    case 2:
        printf("The value is 2");
        break;
    default:
        printf("The value is 3");

        return 0;
    }
}
