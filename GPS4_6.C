
#include <stdio.h>

int main()
{
    int n,k,c=0,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<=n;i++)
    {
     if(i==k)
     {
         c++;
     }
       
    }
    printf("%d",c);
    return 0;
}
