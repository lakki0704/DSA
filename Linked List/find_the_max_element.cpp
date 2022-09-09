
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

int find_max(struct Node *p)
{
    int max_ele = -123489;
    while(p!=NULL)
    {
        if(p->data> max_ele)
        {
            max_ele= p->data;
        }
        p=p->next;
    }
    return max_ele;
}

int find_max_recursive(struct Node *p)
{
    int x=0;
    if(p==0)
    {
        return 0;
    }
    else
        x = find_max_recursive(p->next);
    if(x> p->data)
    {
        return x;

    }
    else{
        return p->data;
    }
    {

    }
}


int main()
{
    int A[]= {3, 5,7,10,15};
    create(A,5);
cout<< "The max element in the list is : " << find_max(first);

cout<< endl<< "The max element in the list is (recursive) : " << find_max_recursive(first);
    return 0;
}
