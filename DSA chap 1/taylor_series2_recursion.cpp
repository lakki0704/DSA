
#include <iostream>

using namespace std;


    double taylor(int x , int a)
    {
        static double s=1;
        if(a==0)
        {
            return s;
        }
        s= 1+ (x*s/a);

        return taylor(x,a-1);

    }

    int main()
    {

        int x,a;
        x =4;
        a=10;
        double taylor1 = taylor(x,a);
        printf("Ans of taylor series : %lf ",taylor1);
    }
