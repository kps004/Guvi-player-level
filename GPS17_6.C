/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
long long int i,m,n,c,j,k,l;
 scanf("%lld %lld",&m,&n);
 i=1;
 while(m>1)
 {
     i=i*m;
     m--;
 }
 m=i;
 i=1;
 while(n>1)
 {
     i=i*n;
     n--;
 }
 n=i;
// printf("m=%d,n=%d",m,n);
if(m>n)
{
    c=n;
}else
{
    c=m;
}
//printf("c=%d",c);
for(i=c;i>=0;i++)
{
    if((m%i==0)&&(n%i==0))
    {
        printf("%lld",i);
        break;
    }
}
    return 0;
}
