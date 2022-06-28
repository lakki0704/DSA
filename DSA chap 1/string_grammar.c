#include <stdio.h>
#include <string.h>

void replace(char a[], char b[]);

int main(void)
{
  char string1[100]; char string2[100];
  printf("enter a string: ");
  fgets(string1, sizeof(string1), stdin);

  replace(string1, string2);

  printf("%s\n", string2);
}


void replace(char a[], char b[])
{
  int i, j;   // using two indexes, one for a and one for b

  for (i = 0, j = 0; i < strlen(a); i++, j++)
  {
    b[j] = a[i];

    if (a[i] == 'a' && a[i+1]==' ' && a[i+2] =='a')    // if it's 'a'
    {
      b[++j] = 'n';
    }
    if (a[i] == 'a' && a[i+1]==' ' && a[i+2] =='e')    // if it's 'a'
    {
      b[++j] = 'n';
    }
    if (a[i] == 'a' && a[i+1]==' ' && a[i+2] =='i')    // if it's 'a'
    {
      b[++j] = 'n';
    }
    if (a[i] == 'a' && a[i+1]==' ' && a[i+2] =='o')    // if it's 'a'
    {
      b[++j] = 'n';
    }
    if (a[i] == 'a' && a[i+1]==' ' && a[i+2] =='u')    // if it's 'a'
    {
      b[++j] = 'n';
    }
  }

  b[j] = 0;
}
