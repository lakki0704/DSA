
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first; //global pointer

void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    //linked list is empty right now
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last = first; //address of last becomes first now

    for(i=1; i<n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next =t; //address of t becomes the address of last->next
        last=t;
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p= p->next;
    }
}


void display2(struct Node *p)//recursively printing
{

    if(p!=NULL)
    {
        printf("%d ",p->data);
        display2(p->next);
    }
}
int main()
{
    int A[]= {3, 5,7,10,15};
    create(A,5);

    display(first);
    cout<<endl;

    display2(first);
    return 0;
}
