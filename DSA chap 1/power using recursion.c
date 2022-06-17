#include <stdio.h>

int power(int a, int b)
{
    static int z =1;

    if(b>0){
            z = z*a ;
        return power(a, b-1);
    }
    else{
        return z;
    }

}

int main()
{
    int a, b;
    a =2;
    b=3;
    int power2 = power(a,b);
    printf("%d",power2);
    return 0;
}

