#include <stdio.h>
int main()
{
    int i,j;
    int marks[2][4] = { {5, 500, 5000, 500000},
                        {13, 226, 39, 42}};

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("The mark of %d,%d element in the array is: %d\n", i,j, marks[i][j]);

        }
        
       
    }
    printf("%d", marks[1][3]);
     return 0;
}
