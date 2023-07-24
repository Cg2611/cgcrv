#include<stdio.h>
int find_gcd(int,int);
int find_lcm(int,int);
int main()
{
    int num1, num2,gcd, lcm;
    printf("Enter number 1 ");
    scanf("%d",&num1);
     printf("Enter number 2 ");
    scanf("%d",&num2);
    gcd= find_gcd(num1, num2);
    printf("The gcd of %d and %d id %d \n", num1,num2,gcd);
     lcm= find_lcm(num1, num2);
    printf("The lcm of %d and %d id %d \n", num1,num2,lcm);
    return 0;

}

int find_gcd(int n1,int n2)
{
    while (n1 != n2)
    {
    if (n1>n2)
    return find_gcd(n1-n2,n2);
    else
    return find_gcd(n1,n2-n1);
    }
  return n1;
}

int find_lcm(int n1, int n2)
{
    static int temp=1;
    if (n1%temp ==0 && n2%temp==0)
    return temp;
    temp++ ;
    find_lcm( n1,  n2);
    return temp;
}