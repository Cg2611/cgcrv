#include <stdio.h>
#include<string.h>
int main()
{
char s1[15];
char s2[15];
printf("Enter string 1\n");
gets(s1);
printf("Enter string 2\n");
gets(s2);
strcat(s1,s2);
puts(s1);
puts(s2);
//printf("%d",strlen(sample));
   return 0;
}