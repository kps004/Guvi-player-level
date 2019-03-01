

#include <stdio.h>

int main()
{
     char s[1000];
     int i,j,k,l;
     gets(s);
     for(l=0;s[l]!='\0';l++);
     printf("%c",s[0]);
     for(i=1;i<l;i++)
     {
         if(i%3==0)
         {
             printf("%c",s[i]);
         }
     }
     

    return 0;
}
