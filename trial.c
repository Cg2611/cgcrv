#include<stdio.h>
int main( ) 
 { 
 int *p,sum,i; 

 int a[5]={10,20,30,40,50}; 
 i=0; 
 p=&a; 
 while(a<5) 
 { 
 printf(“%d%d%u”, i,*p,p); 
 sum=sum+*p; 
 i++; p++; 
 } 
 printf(“%d”, sum); 
 return 0;
 }