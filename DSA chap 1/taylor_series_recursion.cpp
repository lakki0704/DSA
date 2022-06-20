
#include <iostream>

using namespace std;


    double taylor(int x , int a)
    {
        static double p = 1;
        static double f = 1;
        double r;
        if(a==0)
        {

            return 1;
        }
        else
        {
            r= taylor(x,a-1);
            p=p*x;
            f=f*a;
            return r+(p/f);
        }
    }

    int main()
    {

        int x,a;
        x =4;
        a=100;
        double taylor1 = taylor(x,a);
        printf("Ans of taylor series : %lf ",taylor1);
    }
