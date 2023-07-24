#include <stdio.h>
int main()
{
    char name[30];
    gets(name);
    printf("%s \n", name);
    puts(name);
    return 0;
}