#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float a,b,c, disc, root, root1, root2;
printf ("Enter the coeffecients of the quadratic equations\n");
scanf("%f %f %f",&a,&b,&c);
if(a==0 && c==0)
{
    printf("Not Possible\n");
    exit(0);
}
else if(a==0 && b!=0)
{
root= -c/b;
printf("Linear roots are %f",root);
}
else 
{
    disc= b*b -(4*a*c);
    if(disc>0)
    {
        root1= (-b + sqrt(disc)) / 2*a;
     root1= (-b - sqrt(disc)) / 2*a;
     printf("The roots are real and distinct, the roots are %f, %f", root1, root2);
    }
    else if(disc=0)
    {
        root1=root2=-b/(2*a);
        printf("The roots are real and equal");
        printf("The roots are %f, %f", root1, root2);
    }
    else
    {
        root1= -b/(2*a);
        root2= sqrt(abs(disc))/(2*a);
        printf("The roots are imaginary \n");
        printf("The first root is %f+i%f \n", root1, root2);
                printf("The second root is %f-i%f", root1, root2);

    }
    
}
}
