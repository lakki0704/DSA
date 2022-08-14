
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

int countlinks(struct Node *p)
{
    int count_ = 0;
    while(p!=NULL)
    {
        count_++;
        p=p->next;
    }
    return count_;
}

int recursive_countlinks(struct Node *p)
{
    if(p==NULL)
    {
        return 0;
    }

    else{
        return recursive_countlinks(p->next)+1;
    }
}



int main()
{
    int A[]= {3, 5,7,10,15};
    create(A,5);

    cout<< "Total linked lists (using iterative function) = " << countlinks(first) << endl;

    cout<< "Total linked lists (using recursive function) = " << recursive_countlinks(first) << endl;

    return 0;
}
