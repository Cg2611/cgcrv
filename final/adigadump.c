#include <stdio.h>
#define size 50
typedef struct s
{
  int top;
  int array[size];
}stack;
int main()
{
    char ch;
    stack s;
    int n,x;
    initialize(&s);
    while(1)
    {
    printf("\n\n\n           MENU            \n\n\n");
    printf("1.PUSH\n2.POP\n3.EXIT\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '1':printf("enter the element\n");
               scanf("%d",&n);
               push(&s,n);
               break;
        case '2':x=pop(&s);
               printf("%d is removed\n",x);
               break;
        case'3': return 0;
    }
    }
    return 0;
}
void push(stack *s,int n)
{
    if(s->top>=(size-1))
    {
        printf("overflow\n");
        return;
    }
    s->top++;
    s->array[s->top];
     printf("top->",s->top);
}
int pop(stack *s)
{
    int x;
    if(s->top<0)
    {
        printf("underflow\n");
        return;
    }
    x=s->array[s->top];
    s->top--;
}
int initialize(stack *s)
{
s->top=-1;
}