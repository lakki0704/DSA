#include <iostream>
using namespace std;

struct Stack{
int size;
int top;
int *S;
};

void create(struct Stack *st)
{

    cout<<"Size "<<endl;
    cin>> st->size;
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int));
}

void display(struct Stack st)
{

    int i;
    for(i=st.top; i>=0; i--)
    {
        cout<<st.S[i] << " ";
    }
    cout<< endl;
}

void push(struct Stack *st, int x)
{
    if(st->top==st->size-1)
    {
        cout<<"Stack overflow" <<endl;
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}
int pop(struct Stack *st)
{
    int x;
    if(st->top==-1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
    {
        x= st->S[st->top];
        st->top--;
        return x;
    }
}

int main()
{
    struct Stack t;
    struct Stack st;
    create(&st);
    push(&st,12);
    push(&st,10);

    cout<< endl<<"Displaying stack : " << endl;
    display(st);

    cout <<"Popping out " << pop(&st) << endl;
    display(st);

    cout <<"Popping out " << pop(&st) << endl;
    display(st);



    return 0;
}
