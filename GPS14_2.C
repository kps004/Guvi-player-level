//**************************/

#include <stdio.h>

int main()
{

    char s[1000];
    int a[1000],i,j,k=0,n=0,l;
    scanf("%[^\n]",s);
   for(l=0;s[l]!='\0';l++)
   {
       a[n]=s[l]-48;
       n++;
   }
   
   for(i=0;i<n;i++)
   {
       if(((a[i]%2==0)&&(a[i+1]%2==1))||((a[i]%2==1)&&(a[i+1]%2==0)))
       {
           k=k+2;
           i++;
       }
   }
   printf("%d",k);
    return 0;
}
