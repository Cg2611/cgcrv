#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("The entered age is %d", age);
    if (age>=18)
    {
       printf("\nYou are eligible to vote\n");
    }
    else if (age>10)
    {
    printf("\nYou are eligible to vote in kids election\n");
    }

    else
    {
    printf("\nYou are ineligible to vote\n");
    }
    return 0;
}