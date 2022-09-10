#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*Head,*last;

void create(int A[], int n)
{
    struct Node *t;
    Head= (struct Node*)malloc(sizeof(struct Node));
    Head->data =A[0];
    Head->next =Head;
    last = Head;

    for(int i=1; i< n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data =A[i];
        t->next=Head;
        last->next =t;
        last =t ;
    }

}

void display(struct Node *p)
{
    while(p->next!=Head)
    {
        cout << p->data << " ";
        p=p->next;
    }
}

int main()
{
    int A[]= {1,2,3,4,5,6};
    int n=6;
    cout<< "Circular linkedlist \n";
    create(A,n);
    display(Head);
    return 0;
}
