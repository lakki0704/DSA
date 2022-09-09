
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

Node * searchlinear(struct Node *p, int key)
{
    struct Node *q= NULL ; //create a new pointer which will follow p
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p;

            //q->next = p->next;
            //p->next = first->next;
            //first = p;
        }
        //q=p;
        //p=p->next;
        p=p->next;

    }
    return NULL;
}

Node * searchlinear1(struct Node *p, int key)
{
  struct Node *q= NULL ; //create a new pointer which will follow p
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next = p->next;
            p->next = first->next;
            first = p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;

}




int main()
{
    int A[]= {3, 5,7,10,15};
    create(A,5);

    struct Node *temp;
    temp= searchlinear(first,15 );
    if(temp)
    {
        cout << "The key is found!" <<endl;
    }


    struct Node *temp1;
    temp1= searchlinear1(first,15 );
    if(temp1)
    {
        cout << "The key is found!" <<endl;
    }
    else{
        cout<<"oops!";
    }


    return 0;
}
