
#include <stdio.h>

int main()
{
     int n,i,j;
     scanf("%d",&n);
for(i=n-1;i>1;i--)
{
    if(n%i==0)
    {
    printf("yes");
    break;
    }
}
if(i==1){
    
    printf("no");
}

    return 0;
}
