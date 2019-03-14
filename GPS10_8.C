
#include <stdio.h>

int main()
{
  
  char s[100000],t;
  int i,j,l,m,k=0;
  
  scanf("%[^\n]",s);
  scanf("\n");
  scanf("%c",&t);
  
  for(l=0;s[l]!='\0';l++);
  
  for(i=0;i<=t;i++)
  {
      
      for(j=0;j<=t;j++)
      {
          if(s[i]==i)
          {
              k++;
              break;
          }
      }
  }
  printf(" %d",k);
    return 0;
}
