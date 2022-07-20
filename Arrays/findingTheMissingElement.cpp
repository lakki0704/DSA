#include <iostream>
using namespace std;


int main()
{
  //finding the missing element
  int arr[10] = { 6,7,8,9,10,11,14,15,18,19};
  int l = arr[0];
  int h= arr[9];
  int diff = arr[0]-0;

  cout << "The missing elements are : " << endl;
  for(int i=0; i< 10; i++)
  {
      if(arr[i] -i != diff)
      {
          while(diff<arr[i]-i)
          {
              printf("%d ",diff+i);
              diff++;
          }
      }
  }
    return 0;
}
