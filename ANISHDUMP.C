#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
    int arr[50];
    int f;
    int r;
 }queue;
int enqueue(queue *, int);
int dequeue(queue *);
void initialize(queue *);

int main(){
    queue q;
    char ch;
    int n;
    
        initialize(&q);
    printf("MAIN MENU\n");
    printf("\n1.ENQUEUE\n, 2. DEQUEUE\n  3.EXIT\n");
    scanf("%c",&ch);
    
    switch(ch){
        case '1': printf(" enter the value to be added\n");
                  enqueue(&q,n);
                  break;
        case '2': printf("the value to be added\n");
                  dequeue(&q);
                  break;

        case '3' : return 0;
        break;
    }      
    
    return 0;

}

int enqueue(queue *q, int n){
    q->r++;
    q->arr[q->r]=n;
    return 0;
}
int dequeue(queue *q){
    int x;
   x=q->arr[q->r];
   q->r--;
   q->f++;
   return x;
   
}

void initialize(queue *q){
    q->r=-1;
    q->f=0;
}