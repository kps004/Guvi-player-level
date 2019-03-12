
#include <stdio.h>

int main()
{
    int n,t=1,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        t=t*i;
    }
    printf("%d",t);

    return 0;
}
