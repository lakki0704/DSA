#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL ,*last,*second=NULL, *third=NULL,*fourth=NULL;

void create(int A[],int n)
{
    struct Node *t;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last=first;
    int i;
    for(i=1; i<n; i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next=NULL;
        last->next =t;
        last = t;

    }
}


void create2(int A[],int n)
{
    struct Node *t;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last=second;
    int i;
    for(i=1; i<n; i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next=NULL;
        last->next =t;
        last = t;

    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<< p->data << " ";
        p=p->next;
    }
}


void merge_ll(struct Node *p, struct Node *q)
{
    if(p->data < q->data)
    {
        fourth=last=p;
        p=p->next;
        fourth->next =NULL;
    }
    else
    {
        fourth=last=q;
        q=q->next;
        fourth->next = NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
            {
                last->next=p;
                last = p;
                p=p->next;
                last->next =NULL;
            }
        else
        {
            last->next = q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }

    if(p)last->next =p;

    if(q)last->next =q;
}

int count_l(struct Node *p)
{
    int count_l=0;
    while(p!=NULL)
    {
        count_l++;
        p= p->next;
    }
    return count_l;
}


/*void concat(struct Node *p, struct Node *q)
{
    third = p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next =q;
}*/


void Merge(struct Node *p,struct Node *q)
{
 //struct Node *last;
 if(p->data < q->data)
 {
 third=last=p;
 p=p->next;
 third->next=NULL;
 }
 else
 {
 third=last=q;
 q=q->next;
 third->next=NULL;
 }
 while(p && q)
 {
 if(p->data < q->data)
 {
 last->next=p;
 last=p;
 p=p->next;
 last->next=NULL;

 }
 else
 {
 last->next=q;
 last=q;
 q=q->next;
 last->next=NULL;

 }
 }
 if(p)last->next=p;
 if(q)last->next=q;

}





int main()
{
    int A[]={3,4,5,6,7,8,9};
    int B[]={2,10,12,13,14};

    create(A,7);
    create2(B,5);
    display(first);
    cout<< endl;
    display(second);

    //concat(first, second);
    cout<<endl;
    //display(third);
    cout << endl;

    merge_ll(first,second);
    display(fourth);

    //Merge(first,second);
    //display(third);
    return 0;

}

