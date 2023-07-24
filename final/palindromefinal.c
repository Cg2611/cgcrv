#include<stdio.h>
#include<string.h>
void check (char [], int);
int main()
{
     char word[15];
    printf("Enter the word to be checked if it is a palindrome\n");
    scanf("%s", word);
    check(word, 0);
    return 0;
}

void check( char word[], int index)
{
   int len= strlen(word)-(index+1);
   if (word[index]==word[len])
   {
    if (index == len|| index+1 == len)
    {
    printf("The given string is a palindrome \n");
    return;
    }
    check(word,index+1);
   }
   else
   printf("The given string is not a palindrome");
}