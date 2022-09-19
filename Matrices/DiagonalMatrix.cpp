#include <iostream>

using namespace std;

class Diagonal
{
private :
    int n;
    int *A;
public:
    Diagonal(int n)
    {
        this->n =n;
        A = new int[n];
    }
    void Set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~Diagonal()
    {
        delete []A;
    }

};
void Diagonal :: Set(int i, int j, int x)
{
    if(i==j)
    {
        A[i-1]= x;
    }
}

int Diagonal :: get(int i, int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    else
    {
        return 0;
    }
}

void Diagonal :: display()
{
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n ; j++)
        {
            if(i==j)
            {
                cout << A[i-1];
            }
            else{
                cout<< " 0 ";
            }
    }
     cout << "\n";
}
}

int main()
{
    Diagonal m(4);
    m.Set(1,1,5);
    m.Set(2,2,3);
    m.Set(3,3,2);
    m.Set(4,4,1);

    m.display();

    return 0;
}
