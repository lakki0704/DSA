//chocolate problem
#include <iostream>

using namespace std;

int cho(int chocolates)
{
    int wrapper_count;
    static int chocos =0;
    if(chocolates<3)
    {
        return (chocos);
    }

    int extra_chocolates = chocolates/3;
    wrapper_count = chocolates%3 + extra_chocolates;
    chocos = chocos+extra_chocolates;
    return cho(wrapper_count);



}

int main()
{
    int chocolates = 15;
    // int wrapper_count = 0;
    int total = cho(chocolates);
    cout<< "Total chocolates : " << chocolates+total;

    return 0;
}
