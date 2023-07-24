#include<stdio.h>
int main()
{
    int i,j,swp,count,number[i];
    printf("Enter the number of elements\n");
    scanf("%d",&count);
    printf("Enter the elements of the array\n");
    for(i=0;i<count;i++)
scanf("%d",&number[i]);
    for(i=0;i<count;i++)
{
        for(j=i+1;j<count ;j++)
        {
           if(number[j]<number[j+1])
           {
           swp = number[j];
           number[j]=number[j+1];
           number[j+1]=swp;
           }
        }
}
printf("The sorted array is \n");
for(i=0;i<count;i++)
{
    printf("%d",number[i]);
}
return 0;
}