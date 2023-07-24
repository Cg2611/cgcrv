#include <stdio.h>
int compare_strings(char*, char*);
int main()
{
    char first[100], second[100], result;
    printf("Enter the first string");
    gets(first);
    printf("Enter the second string");
    gets(second);
    result = compare_strings(first, second);
    if (result == 0)
    {
        printf("The strings are equal");
    }
    else
        printf("The strings are not equal");

    return 0;
}

int compare_strings(char*first, char*second)
{
    while (*first == *second)
    {
        if (*first == '\0' || *second == '\0')
            break;
        first++;
        second++;
    }
    if (*first == '\0' && *second == '\0')
    return 0;
    else 
    return -1;
}