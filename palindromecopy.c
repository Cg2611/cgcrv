#include<stdio.h>
#include<string.h>
void check (char[],int);
int main()
{
    char word[15];
    printf("Enter the string to be checked for a pallindrome");
    scanf("%s", word);
    check(word,0);
    return 0;

}

void check(char word[], int index)
{
    int len= strlen(word)-(index+1);
    if (word[len] == word[index])
    {
        if (index+1 == len || index == len)
        {
            printf("Entered string is a palindrome");
        return;
        }
        chcek(word, index+1);
    }
    else
    {
    printf("The enetered string is not a pallindrome");
    }

}