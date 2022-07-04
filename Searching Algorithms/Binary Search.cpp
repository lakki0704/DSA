#include <iostream>

using namespace std;

void sort_arr(int *arr , int size_arr)
{
    int i;
    for(i=0 ; i<size_arr ; i++)
    {
        for(int j =i+1; j< size_arr; j++)
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

int BinarySearch(int arr[] , int size_arr , int key)
{
    int l ;
    int h ;
    int mid;
    l = arr[0]; h = arr[size_arr-1]; mid = (l+h)/2;
    while(l<=h){

        if(arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}


int main()
{
    int n;
    printf("No. of elements in array : ");
    scanf("%d",&n);
     int arr[n];
    for(int i=0 ; i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is : \n");
    for(int i=0 ; i<n ;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe sorted array is : \n");
    sort_arr(arr,n);
    for(int i=0 ; i<n ;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the key to search : ");
    int key ;
    scanf("%d",&key);
    int keyindex = BinarySearch(arr, n, key);
    if(keyindex!=-1){

         printf("\nThe index of the key value that you entered is : %d \n",keyindex);
    }
    else{
        printf("\nThe element isnt there in the array");
    }


    return 0;
}
