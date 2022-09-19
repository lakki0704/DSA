//Stack using Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*top=NULL;

void push(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 {
 t->data=x;
 t->next=top;
 top=t;
 }

}
int pop()
{
 //struct Node *t;
 int x=-1;

 if(top==NULL)
 printf("Stack is Empty\n");
 else
 {
 x=top->data;
 top=top->next;
 //free(t);
 }
 return x;
}



void Display(struct Node *top)
{
 //struct Node *p;
 //p=top;
 while(top!=NULL)
 {
 printf("%d ",top->data);
 top=top->next;
 }
 printf("\n");
}


int main()
{
 push(10);
 push(20);
 push(30);

 Display(top);

 printf("%d ",pop());

 return 0;
}
