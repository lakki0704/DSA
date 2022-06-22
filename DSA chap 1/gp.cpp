#include <iostream>

using namespace std;

int nthTermOfGP(int N, int A, int R) {

    static int s = A;
    if(N==1)
    {
        return s;
    }
    else{
        s= s*R;
        return nthTermOfGP(N-1,A,R);
    }

}


int main()
{
    int n,a,r;
    n=1,a=2,r=2;
    printf("%d",nthTermOfGP(n,a,r));

    return 0;
}
