
#include <stdio.h>

int main()
{
    int n,i,j,k,min=32456,t;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        t=n/i;
        if(t%2==1)
        {
            if(min>i)
            {
                min=i;
            }
        }
    }
printf("%d",min);
    return 0;
}
