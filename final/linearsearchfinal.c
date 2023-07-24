#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,key,n,a[50];
printf("Enter the number of elements in the array\n");
scanf("%d",&n);

printf("Enter the elements of the array\n");
for (i=0;i<n;i++)
{
    printf("Enter the element\n");
    scanf("%d",&a[i]);
}
printf("Enter the element to be found\n");
scanf("%d",&key);

for (i=0;i<n;i++)
{
    if(a[i]==key)
    {
        printf("The element %d has been found in the position %d", a[i],i+1);
        exit (0);
    }

}
printf("The element was not found in the array");
return 0;

}