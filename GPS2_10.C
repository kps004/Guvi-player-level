

#include <stdio.h>

int main()
{
    int i;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
     s[i]=s[i]+3;   
    }
  printf("%s",s);
    return 0;
}
