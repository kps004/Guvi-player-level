
#include <stdio.h>

int main()
{
    long long int d,m,y,t=1,i;
    scanf("%lld %lld %lld",&d,&m,&y);
    for(i=0;i<m;i++)
    {
        t=t*d;
    }
   t=t%y;
   printf("%d",t);
    return 0;
}
