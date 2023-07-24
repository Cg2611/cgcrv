#include<stdio.h>
int findgcd(int,int);
int findlcm(int,int);
int main()
{
    int num1,num2,gcd,lcm;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    gcd=findgcd(num1,num2);
    printf("The gcd is %d \n",gcd);

    if (num1>num2)
    {
    lcm=findlcm(num1,num2);
    }

    else{
    lcm=findlcm(num2,num1);}

    printf("The lcm is %d \n",lcm);

    }

    int findgcd(int n1,int n2)
    {
        while(n1!=n2)
        {
            if(n1>n2)
            return findgcd(n1-n2,n2);

            else
            return findgcd (n1,n2-n1);
        }
        //return n1;
    }

    int findlcm(int n1,int n2)
    {
        static int temp=1;
        if(temp%n1==0 && temp%n2==0)
        return temp;
        temp++;
        findlcm (n1,n2);
        return temp;
    }