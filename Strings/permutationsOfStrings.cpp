#include <iostream>

using namespace std;

void swap_1(char *arr, int l, int r)
{
    int temp = arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}

void permute(char *arr, const int l, int r)
{
    //base condition
    if(l==r)
    {
        cout<< arr << " ";
        return;
    }
   else
   {
       for(int i=l; i<=r ; i++)
       {
           swap_1(arr,l,i);
           permute(arr, l+1,r);
           swap_1(arr,l,i);
       }
   }

}

int main()
{
    char arr[] = "abcd";
    int l =0;
    int i;
    for(i=0; arr[i]!='\0'; i++)
    {

    }
    int r= i-1;
    permute(arr,l,r);
    return 0;
}
