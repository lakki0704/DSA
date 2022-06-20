#include <iostream>

using namespace std;

int fibo(int n)
{

    static int a=0, b=1, sum=0, temp=0;
    if(n>0)
    {

        sum =b+a;
        temp=b;
        b=b+a;
        a=temp;
        return fibo(n-1);
    }
    else{
        return sum;
    }
}

int main()
{
    int n=5;
    int fibonacci = fibo(n);
    cout << "Fibo sum : " << fibonacci ;

    return 0;
}
