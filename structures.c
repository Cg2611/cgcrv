#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks;
};

int main()
{
struct student a[50];
int i,n, roll;
float marks;
float sum=0, avg=0;
printf("Enter the number of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the names of the students \n");
    scanf("%s", a[i].name);
    printf("Enter the roll of the students \n");
    scanf("%d", &a[i].roll);
    printf("Enter the marks of the students \n");
    scanf("%f", &a[i].marks);
}
for(i=0;i<n;i++)

    {
        sum= sum+ a[i].marks;
    }

    avg=sum/n;
    printf("The average marks is %f \n", avg);
    printf("Enter the roll number of the student to be found");
    scanf("%d", &roll);

    for(i=0;i<n;i++){
    if(a[i].roll==roll)
    {
    printf("Marks of the student is %f", a[i].marks);
    }
    }

return 0;
}
