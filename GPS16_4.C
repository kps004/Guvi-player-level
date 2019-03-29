
#include <stdio.h>

int main()
{

char s[10000];
int i,j,k,l,n=0;
scanf("%[^\n]",s);
scanf("\n");
scanf("%d",&k);


for(l=0;s[l]!='\0';l++);
if(k==1)
{
     if((s[0]>=97)&&(s[0]<=122))
       {
           s[0]=s[0]-32;
       }
}
else
{
  for(i=0;i<l;i++)
 {
       if((s[n-1]>=97)&&(s[n-1]<=122))
       {
           s[n-1]=s[n-1]-32;
       }
       n=n+k;
 }
}
  printf("%s",s);

    return 0;
}
