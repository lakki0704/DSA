#include <iostream>
using namespace std;

int main()
{
    char a[200];
    cin >> a;
    int i,j;
    for( i =0 ; a[i]!='\0'; i++)
    {

    }
    int len = i;

    char newarr[len];
    for(i=len-1 ,j=0; i>=0, j<len; i--,j++)
    {
        newarr[j]= a[i];
    }

    cout<< newarr<< endl;

}
