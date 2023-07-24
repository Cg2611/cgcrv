#include <stdio.h>  
int main()  
{  
    int i, j; 
    printf (" Enter a number to generate the table in C: ");  
    scanf (" %d", &j);   
      
    printf ("\n Table of %d", j);  
    // use for loop to iterate the number from 1 to 10  
    for ( i = 1; i <= 10; i++)  
     
        printf ("\n %d * %d = %d", j, i, (j*i));  
      
    return 0;  
}  