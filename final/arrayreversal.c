#include<stdio.h>
int main()
{
    printf("Hello World\n");
    int n;
    printf("Enter the number of elements in the array \n");
    scanf("%d",&n);
    int i, cgs[10];
    printf("Enter the elements\n");
    for( i=0;i<n;i++)
    { 
    scanf("%d \n",&cgs[i]);
    }
     for( i=0;i<n;i++)
    { 
    printf("%d \n",cgs[i]);
    }
    printf("The reverse of the array is\n");
     for( i=n-1;i>-1;i--)
    { 
    printf("%d \n",cgs[i]);
    }
    return 0;
}