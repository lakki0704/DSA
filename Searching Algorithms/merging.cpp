#include <iostream>

using namespace std;

void sort_array(int *arr, int n) //sorting the array
{
    for(int i =0 ; i<n ; i++)
    {
        for(int j=i+1; j<n ;j++)
        {
            if(arr[i]> arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void merge_array(int *arr1, int *arr2, int *arr3, int m , int n) //merge the array first and then sort it
{
    for(int i =0 ; i<m ; i++)
    {
        arr3[i] = arr1[i];
    }
    int k = m;
    for(int i=0 ;i<n; i++)
    {
        arr3[k] = arr2[i];
        k=k+1;
    }
    sort_array(arr3, m+n);
}

int main()
{
    int m ,n;
    cout << "Enter the number of elements for both arrays : " << endl;
    cin >> m ; cin>> n;



    int arr1[m] ; int arr2[n];
    cout << endl<< "Enter the elements of arr1 : ";
    for(int i = 0 ; i<m ; i++)
    {
        cin >> arr1[i];
    }
    cout<< endl << "Enter the elements of arr2 : " ;
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr2[i];
    }
    sort_array(arr1, m);
    sort_array(arr2, n);

    cout << endl << "Sorted arrays are : " << endl;
    cout << "Array 1 : " << endl ;
    for(int i = 0 ; i<m ; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl << " Array 2 : " << endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout << arr2[i] << " ";
    }
    int arr3[m+n];

    merge_array(arr1, arr2, arr3, m, n);

    cout << endl << "The merged array is : " << endl;
     for(int i = 0 ; i<m+n ; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}
