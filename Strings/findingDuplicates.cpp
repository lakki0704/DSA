#include <iostream>
using namespace std;

int main()
{

    //finding duplicates
    char arr[100];
    char arr2[100] = {0};
    cin >> arr;
    for (int i=0 ; arr[i]!='\0';i++)
    {
        arr2[arr[i]-97]++;
    }
     for (int i=0 ; i<100 ;i++)
    {
        if(arr2[i]>1)
        {
            printf("The repeated char is %c \n",i+97);
        }
    }



}
