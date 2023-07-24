#include<stdio.h>
int main()
{
    int i,j,swp,count,number[i];
    printf("Enter the number of elements to be sorted\n");
    scanf("%d", &count);
    printf("Enter the elements to be sorted\n");
    for(i=0;i<count;i++)
    {
        scanf("%d",&number[i]);
    }
        for(i=0;i<count;i++)
        {
            for(j=i+1; j< count; j++)
            {
                if (number[i]>number[j])
                {
                    swp=number[i];
                    number[i]=number[j];
                    number[j]=swp;
                }
            }
        }
printf("The sorted array is\n");
for(i=0;i<count;i++)
{
    printf("%d \n",number[i]);
}
return 0;

}