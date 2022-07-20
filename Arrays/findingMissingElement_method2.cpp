#include <iostream>

using namespace std;

int main()
{

   int arr[]= {4,5,7,8, 12,13,14};
   int max_ele = arr[0];
   int len = sizeof(arr)/sizeof(arr[0]);
   for(int i =0; i<len ; i++ )
   {

       if(arr[i] > max_ele)
       {
           max_ele= arr[i];
       }
   }

   int min_ele = arr[0];

   for(int i =0; i<len ; i++ )
   {

       if(arr[i]<min_ele)
       {
           min_ele= arr[i];
       }
   }



   int arr2[max_ele - min_ele +1]={0};

   int len2 = max_ele - min_ele +1;

   cout << "Min no : " << min_ele << " Max no. : " << max_ele << endl;

   for(int i=0 ; i<len; i++)
   {
       arr2[arr[i]] =1;
   }
   cout << endl << "Missing elements : "  <<endl;
   for(int i=min_ele; i<=max_ele; i++)
   {
       if(arr2[i]!=1)
       {
           cout << i << " ";
       }
   }


    return 0;
}
