#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[30];
    float percentage;
}record;

int main()
{
    //struct student record;
    record.id=1;
    strcpy (record.name, "Chaithanya");
    record.percentage=90;
    printf("ID is %d \n",record.id); 
    printf("Name is %s \n",record.name); 
    printf("Percentage is %f \n",record.percentage); 

    struct student record1= {2,"Harsha",99};

    printf("ID is %d \n",record1.id); 
    printf("Name is %s \n",record1.name); 
    printf("Percentage is %f \n",record1.percentage); 

    struct student record2= {3,"Harshaaa",100};

      printf("ID is %d \n",record2.id); 
    printf("Name is %s \n",record2.name); 
    printf("Percentage is %f \n",record2.percentage); 
return 0;
}