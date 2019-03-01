

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            printf("yes");
            break;
        }
    }
    if(i==n)
    {
         printf("no");        
    }
    return 0;
}
