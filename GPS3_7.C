
#include <stdio.h>

int main()
{
 char s[1000],t;
 int i,l;
 gets(s);
 for(l=0;s[l]!='\0';l++);
 for(i=0;i<l;i++)
 {
     if((s[i]>=65)&&(s[i]<=90))
     {
         s[i]=s[i]+32;
     }
     if((s[i]>=97)&&(s[i]<=122))
     {
         s[i]=s[i]-32;
     }
 }
 
printf("%s",s);
    return 0;
}
