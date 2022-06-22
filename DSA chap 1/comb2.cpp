#include <iostream>

//wrong
using namespace std;
int combination(int n , int r)
{
  static int x ,y,z,a;
    x=1; y=1; z=n-r; a=1;
   if(r==0 || n==r){
       return x/(y*z);
   }
   else{
    x= x*n;
    y=y*r;
    z= z*a;
    a++;
   return combination(n-1,r-1);
   }

}
int main()
{
    int n=4, r=2;
    int comb = combination(n,r);
    cout << comb << endl;

    return 0;
}
