#include <iostream>
using namespace std;

void swap_neg(int *arr, int n)
{
    int i = 0;
    int j = n-1;
    for(i ; i< n ; i++)
    {
        for(j ; j>i ; j--)
        {
            if(arr[i]>0 && arr[j]<0){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j] =temp;
                break;
            }
            if(arr[i]<0)
            {
                break;
            }
        }
    }
}

int main()
{
    int arr[] = {-1,-3,6,4,9,-1,10,-4,-8,-2,23,9,-4,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array original : " << endl;
        for(int i=0 ; i< n; i++)
    {
        printf("%d ",arr[i]);
    }
    swap_neg(arr, n);
     cout << endl<< "Array after swapping negative to the left : " << endl;

    for(int i=0 ; i< n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
