#include <iostream>

using namespace std;

int main()
{
    //bubble sort
    int n;

    cin >> n;
    int arr[n];
    cout<<endl;
    for(int i=0; i< n; i++)
    {
        cin>>arr[i];
    }

    int counter = 1;
    while(counter<n)
    {

        for(int i=0 ; i< n-counter ; i++)
        {
            if(arr[i]> arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int i=0; i< n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}
