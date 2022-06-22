#include <iostream>

using namespace std;

void print(string str , int idx, char ele)
{
    static int first = -1;
    static int last = -1;
    if(idx> str.length()-1)
    {
        cout << "First occurrence : " << first << endl << "Last occurrence : " << last ;
        return;
    }
    else{
        if(ele == str.at(idx))
        {
            if(first ==-1)
            {
                first = idx;
            }
            else{
                last = idx;
            }
        }
        print(str, idx+1, ele);
    }
}

int main()
{
    string str = "eeiakleeahkeakfl";
    char e = 'e';
    print(str, 0, e);
    return 0;
}
