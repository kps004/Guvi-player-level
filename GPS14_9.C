
#include <stdio.h>

int main()
{
    int n,l=0,r=0;
    scanf("%d",&n);
    while(n)
    {
        l=n%2;
        n=n/2;
        if(l==1)
        {
            r++;
        }
    }
printf("%d",r);
    return 0;
}
