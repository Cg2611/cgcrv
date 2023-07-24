#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[10];
    int rollno;
    float marks;
};
int main()
{
    struct student a[50];
    int i, n;
    float givenroll, sum = 0, avg;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    printf("Enter the paramenters of students\n");
    for (i = 0; i < n; i++)
    {
        printf("The name of the student is\n");
        scanf("%s", a[i].name);
        printf("Rollnumber of the studenr is\n");
        scanf("%d", &a[i].rollno);
        printf("Enter the marks\n");
        scanf("%f", &a[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i].marks;
    }

    avg = sum / n;
    printf(" The average marks is %f \n", avg);

    printf("Enter the rollnumber of which marks is to be found\n");
    scanf("%f", &givenroll);
    for (i = 0; i < n; i++)
    {
        if (a[i].rollno == givenroll)
        {
            printf("Marks of the student is %f", a[i].marks);
        }
    }

    return 0;
}