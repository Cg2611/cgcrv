#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10], r1,c1,r2,c2,i,j,k;
    printf("Enter the number of rows and columns in matrix 1\n");
    scanf ("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns in matrix 2\n");
    scanf ("%d %d", &r2, &c2);
    if(c1!=r2)
    printf("Matrix multiplication is not possible");
    else 
    {
        printf("Enter the elements of matrix 1\n");
        for(i=0;i<r1;++i)
     for(j=0;j<c1;++j)
     {
     printf("Enter the elements of a %d %d\n", i+1, j+1);
     scanf("%d", &a[i][j]);
     }

      printf("Enter the elements of matrix 2\n");
        for(i=0;i<r2;++i)
     for(j=0;j<c2;++j)
     {
     printf("Enter the elements of b %d %d \n", i+1, j+1);
     scanf("%d", &b[i][j]);
     }

     for(i=0;i<r1;++i)
     for(j=0;j<c2;++j)
     {
        result[i][j]=0;
     }

     for(i=0;i<r1;++i)
      for(j=0;j<c2;++j)
      for(k=0;k<c1;++k)
     {
        result[i][j]= a[i][k]*b[k][j];
     }

      printf("output matrix is\n");
     for(i=0;i<r1;++i)
     for(j=0;j<c2;++j)
     {
     printf("\t %d \t", result[i][j]);
     if(j==c2-1)
     printf("\n\n");
        }
     }
     return 0;
     }