#include <stdio.h>
int main()
{
    int i;
    int marks[4] = {5,500, 5000, 500000};

    for (i = 0; i < 4; i++)
    {
        printf("The mark of %d element in the array is: %d\n", i, marks[i]);
    }

printf("%d", marks[3]);
    return 0;
}
