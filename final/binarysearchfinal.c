#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,key,n,a[50], low, mid, high;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the element to be found\n");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(key==a[mid])
        {
            printf("Element %d is found in position %d", key,mid+1);
            exit (0);
        }
        else
        {
            if(key>a[mid])
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }
    }
    printf("The element is not found in the array");
    return 0;
}