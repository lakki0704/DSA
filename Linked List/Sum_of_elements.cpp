
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

int sum(struct Node *p)
{
    int sum_ele = 0;
    while(p!=NULL)
    {
        sum_ele=sum_ele+p->data;
        p=p->next;

    }
    return sum_ele;
}

int sum_recursive(struct Node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else{
        return sum_recursive(p->next)+ p->data;
    }
}
int main()
{
    int A[]= {3, 5,7,10,15};
    create(A,5);

    cout<< "The sum of all elements : (iteratively) " << sum(first) << endl;

    cout<< "The sum of all elements : (recursively) " << sum_recursive(first);
    return 0;
}
