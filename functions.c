#include <stdio.h>
int sum(int a,int b);
int main()

{
  int a,b,c;
  a=20;
  b=21;
  c= sum(a , b);
  printf("%d",c);
  return 0;
}

int sum(int a, int b){
   return a+b;
}