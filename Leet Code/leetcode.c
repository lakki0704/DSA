/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void reverseWords(char *s){

        int i=0;
        int count =0;
        while(s[i]='\0')
        {
              if(s[i]==' ')
              {
                      count++;
              }
              else
              {
                   continue;
              }
        }
        i=0;
        char new[100];

        while(count>0)
        {
                int a=0;
                for(int j=i; s[j]==' ' ; j++)
                {

                        new[a]= s[j];
                        a++;

                }
                for(int k= 0; k<a ;k++)
                {
                        printf("%c", new[k]);
                }
                printf(" ");
                count--;
                i++;
        }
}

int main()
{
    char *s= "Let's goto heaven for a dance";
    reverseWords(s);
    printf("%c",s[2]);
    return 0;
}
