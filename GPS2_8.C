#include <stdio.h>

int main()
{
    char s[10][1000],t;
    int i,l=0,j,k,n,p=0,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",s[i]);
       
    }
    for(sum=0;s[0][sum]!='\0';sum++);
    for(i=1;i<n;i++)
    {   p=0;
     
      for(j=0;j<sum;j++)
      {
          t=s[0][j];
          for(k=0;s[i][k]!='\0';k++)
          {
              if(t==s[i][k])
              {
                  p++;
                  break;
              }
              
          }
      }
      if(p==sum)
      {
          l++;
      }
      
    }

printf("%d",++l);
    return 0;
}
