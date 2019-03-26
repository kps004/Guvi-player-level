

#include <stdio.h>

int main()
{
  char s[1000];
  int l=0,i,j,k=0;
  scanf("%[^\n]",s);
  while(s[l]!='\0')
  {
      l++;
  }
  
  for(i=0;i<l;i++)
  {
      k=0;
      for(j=i+1;j<l;j++)
      {
      
           if((s[i]==s[j])&&(s[j]!=' '))
           {
               s[j]='\0';
               k=1;
           }
      }
      if(k==1)
      s[i]='\0';
      
  }
  for(i=0;i<l;i++)
  {
      if((s[i]!='\0')&&(s[i]!=' '))
      {
          printf("%c ",s[i]);
      }
  }
    return 0;
}
