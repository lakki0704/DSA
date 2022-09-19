#include <iostream>

using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q,int size)
{
    q->size = size;
    q->front =q->rear=-1;
    q->Q= (int *)malloc(q->size * sizeof(int));

}

void enqueue(struct queue *q, int x)
{
    if(q->rear==q->size-1)
    {
        printf("queue is full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

void dequeue(struct queue *q)
{
    if(q->front ==q->rear)
    {
        printf("Queue is empty");
    }
    else
    {
        q->front++;
        //x= q->Q[q->front];
    }
}

void display(struct queue q)
{
     if(q.rear==-1)
    {
        printf("queue doesn't exist");
    }
    else{
        for(int i=q.front+1; i<=q.rear;i++)
        {
            cout<< q.Q[i]<<" ";
        }
    }
}

int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    dequeue(&q);
    display(q);


    return 0;
}

