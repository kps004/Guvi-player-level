

#include <stdio.h>

int main()
{
    int n,k,i,j,c,a;
    scanf("%d %d",&n,&k);
    if(n>k)
    {
     a=n;    c=k;
    }else
    {
        a=k;
        c=n;
    }
for(i=c;i<a;i++)
{
    if((n%i==0)&&(k%i==0))
    {
        printf("%d",i);
        break;
    }
}
    return 0;
}
