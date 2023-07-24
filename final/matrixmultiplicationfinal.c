#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10],i,j,k,r1,c1,r2,c2;
    printf("Enter the number of rows and columns in first matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns in second matrix\n");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Not possible to multiply the matrices");
    }
    else 
    {
        printf("Enter the elements of matrix 1\n");
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
        printf("Enter the elements of a %d %d \n",i+1, j+1);
        scanf("%d",&a[i][j]);}

        printf("Enter the elements of matrix 2\n");
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++){
        printf("Enter the elements of a %d %d \n",i+1, j+1);
        scanf("%d",&b[i][j]);
        }

        for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;
        }

        for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        for(k=0;k<c1;k++)
        {
            result[i][j]=a[i][k]*b[k][j];
        }

        printf("Output Matrix\n");

        for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            printf(" %d ",result[i][j]);
            if (j==c2-1)
            printf("\n \n");
        }

    }

return 0;

}