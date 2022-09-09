#include <iostream>
using namespace std;

//declaring global first node
struct Node
{

    int data;
    struct Node *next;
}*first;

void create_ll(struct Node *p)
{
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = 0;
    first->next = NULL;
}

void display(struct Node *p)
{

    while(p!=NULL)
    {
        cout<< p->data << " ";
        p=p->next;
    }
}

int count_ll(struct Node *p)
{
    int countL =0;
    while(p!=NULL)
    {
        countL++;
        p=p->next;
    }
    return countL;
}

void insert_node(struct Node *p , int x , int pos)
{
    //x is the element to be inserted
    //pos is the position
     struct Node *t;
     t=(struct Node *)malloc(sizeof(struct Node));
     t->data = x;
     if(pos> count_ll(p))
     {
         cout<< "Position is not available!" <<endl;
     }
     else{
        for(int i=0; i<pos-1 ; i++)
        {
            p=p->next; //address
        }
        t->next = p->next; //t->net points to the p->next and then p->next is shifted to t.
        p->next =t;

     }


}

int main()
{

    create_ll(first);
    insert_node(first, 10, 1);
    insert_node(first,12,2);
    display(first);
    return 0;
}

