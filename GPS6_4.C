
#include <stdio.h>

int main()
{
   char s[1000];
   int l,i;
   
 scanf("%[^\n]",s);
   for(l=0;s[l]!='\0';l++);
   for(i=0;i<l;i++)
   {
       if((s[i]>=65)&&(s[i]<=92))
       {
           printf("yes");
           break;
       }
   }
   if(i==l)
   {
       printf("no");
   }

    return 0;
}
