#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,key,i,a[50], high, mid, low;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Enter the number to be found");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low <=high)
    {
        mid=(high+low)/2;
        if (a[mid]== key)
        {
            printf("Element %d is found in %d position", key, mid+1);
        exit (0);
        }
        else
        {
            if (key>a[mid])
            {
                low=mid+1;
                }

            else 
            high=mid-1;
        }

    }
    printf("Element is not found in the array");
    return 0;
}
