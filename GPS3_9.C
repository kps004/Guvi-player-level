
#include <stdio.h>

int main()
{
int a,b,i,j,c=0;
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
    for(j=1;j<i;j++)
    {
        if(j*j==i)
        {
            c++;
        }
    }
}
printf("%d",c);

    return 0;
}
