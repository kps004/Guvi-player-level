
#include <stdio.h>

int main()
{
   int a,b,i=0,j=0,n;
   scanf("%d",&n);
   while(i<n)
   {
       scanf("%d %d",&a,&b);
       if(a<b)
       j++;
       
       i++;
   }
printf("%d",j);
    return 0;
}
