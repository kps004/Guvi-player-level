#include <stdio.h>

int main()
{
 char s[1000],t;
 int i,k,l,j;
 gets(s);
 for(l=0;s[l]!='\0';l++);
 for(i=0;i<l;i++)
 {
     if(s[i]==' ')
     {
         for(j=i;j<l;j++)
         {
             s[j]=s[j+1];
         }
         
     }
 }
 s[l-1]='\0';
 printf("%s",s);

    return 0;
}
