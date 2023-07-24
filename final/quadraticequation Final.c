#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float a,b,c,root,root1,root2, disc;
    printf("Enter the value of the coeffecients a,b,c \n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0 && c==0)
    {
        printf("Not possible\n");
        exit(0);
    }
    else if (a==0 && b!=0 )
    {
        printf("The quadratic equation has linear roots\n");
        root=-c/b;
        printf("The root is %f \n",root);
    }
    else 
    {
    disc=b*b-4*a*c;
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("The roots are real and distinct \n");
        printf("The value of the roots are %f, %f \n",root1, root2);
    }
    else if(disc==0)
    {
        root1=root2=(-b/2*a);
        printf("Roots are real and equal \n");
        printf("The roots are %f and %f \n", root1, root2);
    }
    else //(disc<0)
    {
        root1=(-b/2*a);
        root2=(sqrt(abs(disc)))/(2*a);
        printf("The roots are imaginary \n");
        printf("The value of the first root is %f+i%f \n", root1,root2);
        printf("The value of the second root is %f-i%f \n", root1,root2);        
    }
    }
 
}



