#include <iostream>

using namespace std;

int count_words(char *a)
{
    int count_word = 0;
    for(int i =0 ; a[i]!='\0'; i++)
    {
        if(a[i]==' ' && a[i-1]!=' ')
        {
            count_word++;
        }
    }
    return count_word;
}

int main()
{
 //counting words;
 char a[] = "Lakshmi is a third year student";
 int total_words = count_words(a);
 cout << "total words : " << total_words;

}

