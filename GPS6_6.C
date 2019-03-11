
#include <stdio.h>

int main()
{
   char s[1000],t;
   int l,i;
   scanf("%[^\n]",s);
   scanf("\n");
   scanf("%c",&t);
   for(l=0;s[l]!='\0';l++);
   
   
   for(i=0;i<l;i++)
   {
       if(s[i]==t)
       {
           printf("%d",i+1);
           break;
       }
   }

    return 0;
}
