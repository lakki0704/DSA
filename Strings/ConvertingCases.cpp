#include <iostream>
using namespace std;

void upper_lower(char *name )
{
    int i;
    for(i=0 ; name[i]!='\0';i++)
    {
        if(name[i]>=65 && name[i] <=90)
        {
            name[i]= name[i]+32;

        }
    }
     cout<< name<< endl;
}

void lower_upper(char *name)
{
    int i;

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=97 && name[i] <=122)
        {
            name[i]= name[i]-32;
        }
    }

  cout << name <<endl;
}

int main()
{

    char name[]= "welcome";

  upper_lower(name);
  lower_upper(name);
    return 0;
}
