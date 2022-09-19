#include <iostream>

using namespace std;

struct Matrix
{
    int n; //size
    int *A; //dynamic array
};
//row major method

void Set(struct Matrix *m, int i, int j , int x)
{

    m->A[((i)*(i-1)/2)+(j-1)]= x;
}

void display(struct Matrix m)
{
    for(int i=1; i<=m.n; i++)
    {
        for(int j=1; j<=m.n ; j++)
        {
            if(i>=j)
            {
                cout << m.A[((i)*(i-1)/2)+(j-1)] << " ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    struct Matrix m;
    cin>> m.n;
    m.A = new int[(m.n)*(((m.n)+1)/2)]; //creating an array of n size

    cout << "Enter elements" << endl;
    for(int i=1; i<=m.n; i++)
    {
        for(int j=1; j<=m.n; j++)
        {
            if(i>=j)
            {
                int x;
                 printf("Element : a[%d][%d] : ",i,j);
                cin>> x;
                Set(&m, i, j, x);
            }

        }
    }
    display(m);
    return 0;
}
