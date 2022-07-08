#include <iostream>

using namespace std;

//setting a value at a particular index
void set_index(int arr[], int n, int index , int value) //take the parameter of array as a pointer or as an array itself.
//It will work as if the address has been sent
{
    arr[index] = value;
}
//max value
int Max(int arr[], int n )
{
    int max_value = arr[0];
    for(int i=0; i< n; i++)
    {
        if(arr[i] > max_value)
        {
            max_value= arr[i];
        }
    }
    return max_value;
}

//min value
int Min(int arr[], int n )
{
    int min_value = arr[0];
    for(int i=0; i< n; i++)
    {
        if(arr[i] < min_value)
        {
            min_value= arr[i];
        }
    }
    return min_value;
}
//sum
int sum(int arr[], int n)
{
    int sum_value = 0;
    for(int i=0 ; i< n ; i++)
    {
        sum_value+= arr[i];
    }
    return sum_value;
}
float avg(int arr[], int n)
{
    int sum_value = 0;
    for(int i=0 ; i< n ; i++)
    {
        sum_value+= arr[i];
    }
    return (float)sum_value/n;

}


int main()
{
    int arr[] ={2,4,6,12,19};
    int n= sizeof(arr)/sizeof(arr[0]);
    //to change a value at a particular index
    int index = 2;
    int value = 34;

    set_index(arr,n,index, value); //send the array by its address's name .ie without brackets and without ampersand sign
    cout << "The new array is : " << endl;
    for(int i=0 ; i< n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<<  "The min value of the array is " << Min(arr,n)<< endl;
    cout <<  "The max value of the array is " << Max(arr,n)<< endl;
    cout << "The sum of the values is  " << sum(arr,n) << endl;
    cout << "The avg of the value is " << avg(arr,n) << endl;


    return 0;
}
