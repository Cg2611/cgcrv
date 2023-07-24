#include<stdio.h>
#include<String.h>

int comparestrings(char*,char*);
int main()
{
    int result;
    char first[100], second[100];
printf("Enter the first string\n");
scanf ("%s", first);
printf("%s", first);
printf("Enter the second string\n");
scanf ("%s", second);
result = comparestrings (first,second);
if (result ==1)
printf("The strings are equal");

else printf("The strings are not equal");
return 0;
}

int comparestrings(char*first, char*second)
{
while(*first==*second)
{
    if(*first=='\0' || *second=='\0')
    break;
    first++;
    second++;
}
    if(*first=='\0' && *second=='\0')
    return 1;

    else
    return 0;

}

