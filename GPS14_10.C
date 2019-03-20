
#include <stdio.h>

int main()
{
    
char s[10000];
int l,i,n;
scanf("%[^\n]",s);
for(l=0;s[l]!='\0';l++);
for(i=0;i<l;i++)
{
    if(s[i]=='a'||s[i]=='b')
    {
        
        
    }
      else
      {
          break;
      }
}
if(i==l)
{
    printf("yes");
}
else
{
    printf("no");
}

    return 0;
}
