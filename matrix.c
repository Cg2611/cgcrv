#include <stdio.h>
int main()
{
    int i,j;
    int marks[2][4] = { {5, 500, 5000, 500000},
                        {13, 226, 39, 42}};

    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d  ", marks[i][j]);

        }
        printf("\n");
       
    }
     return 0;
}
