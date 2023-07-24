#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define STACKSIZE 50
 
typedef struct Node
{
    int top;
    int items[STACKSIZE];
}stack;

void push(stack *,int);
int pop(stack *);

int main()
{
    stack s;
    int k;
    char in[100], res[100];
        printf("Enter the infix expression\n");
    
    scanf("%s", in);
    
    for(k=0;k<5;k++)
    
    printf("%s \n",in);
    
    printf("The code works here\n");
    
    int i,n=5, j=0;
    //n= strlen(in);
    printf("%d is the number of elements in the infix expression \n",n);
    for(i=0; i<n;i++)
    {
        if(in[i]=='+' || in[i]=='-'|| in[i]=='*' || in[i]=='/')
        push(&s, in[i]);
        
        else if(in[i]=='(')
         push(&s, in[i]);

        else if(in[i]==')')
          {
            while(in[i]!='(')
            {
                pop(&s);
                in[i]=res[j];
            i--;
            j++;

            }
          }
        
        else if(in[i]!=isalnum) {
             in[i]=res[j];
        j++;}

        else 
        printf("Conversion is completed\n");
    }


  printf("The postfix expression is \n");
    printf("%s", res);
    
  return 0;
}

void push(stack *s,int x)
{
	if(s->top == (STACKSIZE-1))
	{
		printf("Stack Overflow\n");
		return;
	}
	s->top ++;
	s->items[s->top] = x;
}

int pop(stack *s)
{
	char x;
	if(s->top == -1)
	{
		printf("Stack Underflow!\n");
		return 0;
	}
	x=s->items[s->top];
	s->top --;
	return x;
}