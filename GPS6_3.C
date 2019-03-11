

#include <stdio.h>

int main()
{
   char s[1000];
   int l;
   gets(s);
   for(l=0;s[l]!='\0';l++);
   printf("%d",l);

    return 0;
}
