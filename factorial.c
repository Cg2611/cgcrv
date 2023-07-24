#include <stdio.h>
int factorial(int number){
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return ( number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Factorial for the number %d is %d", num, factorial(num));
    return 0;
}
