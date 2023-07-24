#include<stdio.h>
#include<string.h>

//Maintains student name, rollno and marks in 3 tests
struct student
{
 char name[30];
 char rollno[20];
 int marks[3];
};
typedef struct student stud;
//Calls the main function to be performed
void main()
{
 stud a[20];
 int i,n,ch,high1,high2,high3;
 float avg1,avg2,avg3;
 char rno[20];
 printf(" ****** STUDENTS RECORDS ****** ");
 printf("\n\n");
 printf("\n Enter the number of students: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\n\n Details of %d Student: \n",i+1);
 printf("\n Enter name: ");
 scanf("%s",&a[i].name);
 printf("\n Enter rollno: ");
 scanf("%s",&a[i].rollno);
 printf("\n Enter marks1: ");
 scanf("%d",&a[i].marks[0]);
 printf("\n Enter marks2: ");
 scanf("%d",&a[i].marks[1]);
 printf("\n Enter marks3: ");
 scanf("%d",&a[i].marks[2]);
 }
 printf("\n\n");
 printf("\n 1-SEARCH\n");
 printf("\n 2-AVERAGE\n");
 printf("\n 3-HIGHEST\n");
 printf("\n Enter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: //Function to search rollno & display all records
 printf("\n Enter rollno to be searched: ");

 scanf("%s",&rno);
 for(i=0;i<n;i++)
 if(strcmp(a[i].rollno,rno)==0)
 {
 printf("\n SEARCH SUCCESSFUL: \n");
 printf("\n Details of student is: \n");
 printf("\nNAME ROLLNO MARKS1 MARKS2 MARKS3: \n");
 printf("\n%s\t%s\t%d\t%d\t%d\t\n",a[i].name,a[i].rollno,a[i].marks[0],a[i].marks[1], 
 a[i].marks[2]);
 }
printf("\n SEARCH FAILED! \n");
break;
case 2: //Function to find average marks in each test
 avg1=avg2=avg3=0;
 for(i=0;i<n;i++)
 {
 avg1=avg1+a[i].marks[0];
 avg2=avg2+a[i].marks[1];
 avg3=avg3+a[i].marks[2];
 }
 printf("\n Average of test1= %f\n",avg1/n);
 printf("\n Average of test2= %f\n",avg2/n);
 printf("\n Average of test3= %f\n",avg3/n);
 break;
 case 3: //Function to find highest marks in each test
 high1=a[0].marks[0];
 high2=a[0].marks[1];
 high3=a[0].marks[2];
 for(i=1;i<n;i++)
 {
 if(a[i].marks[0]>high1)
 high1=a[i].marks[0];
 if(a[i].marks[1]>high2)
 high2=a[i].marks[1];
 if(a[i].marks[2]>high3)
 high3=a[i].marks[2];
 }
 printf("\n Highest marks in test1= %d\n", high1);
 printf("\n Highest marks in test2= %d\n", high2);
 printf("\n Highest marks in test3= %d\n", high3);
break;
 default: //erroneous input
 printf("\n Invalid choice! \n");
 break;
 } } 