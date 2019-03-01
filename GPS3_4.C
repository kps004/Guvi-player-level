

#include <stdio.h>

int main()
{
    char s[1000];
    int l,k=0,i;
    gets(s);
    for(l=0;s[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if((s[i]>=48)&&(s[i])<=57)
        {
            k++;
        }
    }
  if(k==l)
  {
      printf("yes");
      
  }else
  {
      printf("no");
  }
    return 0;
}
