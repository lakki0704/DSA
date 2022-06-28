#include <iostream>
#include<string.h>
#include<stdbool.h>

using namespace std;

int main()
{
    char A[1000];
    char B[1000];
    char a[] = "a";
    char an[] = "an";
    gets(A);
    cout << strlen(A) << endl;

    int idxA =0 ; int idxB = 0;

    for( idxA, idxB ; idxA< strlen(A) ; idxA++ , idxB++)
    {
        B[idxB] = A[idxA];
        if(A[idxA]=='a' && A[idxA +1]==' ' && A[idxA +2] == 'e')
        {
            ++idxB;
            B[idxB] ='n';
        }
    }


    B[idxB] = '\0';
   cout << B <<endl;
    return 0;
}
