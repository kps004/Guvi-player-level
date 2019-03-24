
#include <stdio.h>

int main()
{
    char s[10000];
    int i,j,k,l,m=0,pre=0;
    scanf("%[^\n]",s);
    for(k=0;s[k]!='\0';k++);
    
    for(i=0;i<k-1;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
        {
          if((s[i+1]!='a')&&(s[i+1]!='e')&&(s[i+1]!='i')&&(s[i+1]!='o')&&(s[i+1]!='u'))
          {
              m=m+2;
             // if(++i<k)
              i++;
          }
        }
    }

printf("%d",m);
    return 0;
}
ZZ
#include <stdio.h>

int main()
{
    char s[10000];
    int i,j,k,l,m=0,pre=0;
    scanf("%[^\n]",s);
    for(k=0;s[k]!='\0';k++);
    
    for(i=0;i<k-1;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
        {
          if((s[i+1]!='a')&&(s[i+1]!='e')&&(s[i+1]!='i')&&(s[i+1]!='o')&&(s[i+1]!='u'))
          {
              m=m+2;
             // if(++i<k)
              i++;
          }
        }
    }

printf("%d",m);
    return 0;
}
