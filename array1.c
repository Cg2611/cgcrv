#include <stdio.h>
int main()
{
    int i;
    int marks[4];
    for (i = 0; i < 4; i++)
    {
        printf("Enter the mark of %d element in the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("The mark of %d element in the array is: %d\n", i, marks[i]);
    }

    return 0;
}
