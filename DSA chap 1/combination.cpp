#include <iostream>

using namespace std;
int combination(int n , int r)
{
   if(r==0 || n==r)
   {
       return 1;
   }
   else{
    return combination(n-1,r-1)+combination(n-1,r);
   }
}
int main()
{
    int n=4, r=2;
    int comb = combination(n,r);
    cout << comb << endl;

    return 0;
}
