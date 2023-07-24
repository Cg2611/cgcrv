#include<stdio.h>
int fib(int i);
int main()
{
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}
int fib(int i){
    if (i==0)
    return 0;

    else if (i==1)
    return 1;

    else 
    return fib(i-1)+fib(i-2);
}