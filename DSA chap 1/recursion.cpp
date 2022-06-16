#include <iostream>

using namespace std;
int func(int n)
{
    int x=0;// every-time when the function is called , x is initialized to 0
    static int y =0 ; // if y changes in the function, it wont be initialized to 0 again when the function is called

    if(n>0)
    {
        y++;
        x++;
        return(func (n-1)) + x+ y;
    }
    else{
        return 0;
    }
}
int main()
{
   int a =5;
  int  function1 = func(a);
   printf("%d ",function1);
    return 0;
}
