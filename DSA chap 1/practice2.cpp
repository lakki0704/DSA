#include <iostream>

using namespace std;
int print(string str, int idx, int count1 , string newstring)
{
    if(idx > str.length()-1)
    {
        for(int i=0; i<count1; i++)
        {
            newstring += 'x';
        }
        cout<<newstring<<endl;
    }
    char current = str.at(idx);
    if(current == 'x')
    {
        count1++;
        print(str, idx+1 ,count1 , newstring);
    }
    else{
        newstring+= current;
        print(str, idx+1 ,count1 , newstring);
    }
}
int main()
{
    string str = "xxlakshmixxprnvxx";
    print(str,0,0,"");

    return 0;
}
