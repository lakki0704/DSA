#include <iostream>

using namespace std;

class Array {

public:
    int *A;
    int size_A;
    int length_A;

    Array()
    {
        size_A = 10;
        length_A = 0;
        A = new int[size_A];
    }
    Array(int sz, int len)
    {
        size_A = sz;
        length_A = len;
        A = new int[size_A];
    }
    ~Array()
    {
        delete []A;
    }
    void insert_ele();
    void display();

};

void Array :: insert_ele()
{
    cout << "Enter the elements :" << endl;
    for(int i =0 ; i<length_A ; i++)
    {
        cin >> A[i];
    }
}

void Array :: display()
{
    cout << "The array is :" << endl;
    for(int i =0 ; i<length_A ; i++)
    {
        cout << A[i] << " ";
    }
cout<<endl;
}

int main()
{
    Array arr1(20,10);
    arr1.insert_ele();
    arr1.display();

    Array arr2(10,8);
    arr2.display();
    return 0;
}
