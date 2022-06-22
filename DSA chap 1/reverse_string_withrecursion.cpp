#include <iostream>

using namespace std;

void rev(string a, int idx)
{
    if(idx==0)
    {
        cout<<(a.at(idx));
        return;
    }
    else{
        cout<<(a.at(idx));
        return rev(a, idx-1);
    }
}
int main()
{
    string str = "abcd";
    rev(str,str.length()-1);

    return 0;
}
