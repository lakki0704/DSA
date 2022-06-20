#include <iostream>

using namespace std;

void fibo(int n)
{

    static int a=0, b=1, sum=0, temp=0;
    if(n>0)
    {

        sum =b+a;
        cout << sum << " ";
        temp=b;
        b=b+a;
        a=temp;
        return fibo(n-2);
    }

}

int main()
{
    int n=5, a=0,b=1;
    cout << a << " "<< b << " ";
    fibo(n);

    return 0;
}
