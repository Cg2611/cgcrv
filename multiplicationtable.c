#include <stdio.h>
#define COLMAX = 10
#define ROWMAX = 12
int main()
{
    int row, column, y;
    printf("Multiplication table\n");
    do
    {
        column = 1;
        row=1;
        do
        {
            y = row * column;
            printf("%4d", y);
            column = column + 1;
        } while (column <= COLMAX);
        printf("\n");
        row++;

    } while (row <= ROWMAX);
    return 0;
}