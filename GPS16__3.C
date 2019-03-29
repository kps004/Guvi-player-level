
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
    printf("%c",s[0]);
}
else{
  for(i=0;i<l;i++)
 {
       n=n+k;
      printf("%c",s[n-1]);
       
 }
}
    return 0;
}
