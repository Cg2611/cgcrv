#include<stdio.h>
int main()
{
    int i,j,swp,n,a[10];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
scanf("%d",&a[i]);
    for(i=0;i<n;i++)
{
        for(j=0;j<n-1;j++)
        {
           if(a[j]>a[j+1])
           {
           swp = a[j];
           a[j]=a[j+1];
           a[j+1]=swp;
           }
        

        }

}
printf("The sorted array is \n");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}