#include <stdio.h>

int main()
{

int s[10000];
int r,l=0,k,n=0,i=1;
scanf("%d %d",&n,&k);
n=n*k;
//n=n*k;
while(n)
{
    r=n%2;
    s[l]=r;
    l++;
    n=n/2;

}
for(i=0;i<l;i++)
{
    if(s[i]==1)
    {
        printf("%d",i+1);
        break;
    }
}
    return 0;
}
