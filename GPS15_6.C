
#include <stdio.h>

int main()
{
    int n,k,l=1,m=1,j,i;
    scanf("%d %d",&n,&k);
    for (i=n;i>0;i--) {
        l=l*i;
    }
for(i=k;i>0;i--)
{
    m=m*i;
}
j=l/m;
printf("%d",j);
    return 0;
}
