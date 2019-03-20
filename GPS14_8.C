

#include <stdio.h>

int main()
{
    int i,n,l=0,r=0;
    scanf("%d",&n);
    while(n>=1)
    {
        if(n%2==0)
        {
            n=n/2;
            l++;
        }
        else
        {
            break;
        }
    }
    if(n==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
