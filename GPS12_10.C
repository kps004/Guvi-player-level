

#include <stdio.h>

int main()
{
    int r,d,n,l=0,i;
    scanf("%d",&n);
    n++;
    while(n)
    {
        l++;
        n=n/2;
        
    }
    printf("%d",l);

    return 0;
}
