#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,key,i,a[50];
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Enter the number to be found");
    scanf("%d",&key);
 for(i=0; i<n; i++)
 {
    if (a[i]==key)
    {
        printf("The element %d is present in %d position in the array", a[i],i+1);
        exit (0);
    
    }
 }
      printf("The element is nor present in the array");
    return 0;
    }