#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    int *p1;
    int *p2=NULL;

    // int *p=&a;
    printf("Value of number stored is %d\n", *p);
    printf("Value of number stored is %d\n", a);
    
    printf("Address as garbage value is %p\n", p1);
    printf("Address as garbage value is %p\n", p2);


    // printf("%p\n", *p);
    printf("Address of a is %p\n", p);
    printf("Address of a is %p \n", &a);
    printf("Address of the pointer p is %p", &p);


    return 0;
}