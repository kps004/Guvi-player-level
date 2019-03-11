/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
    
int a[1000],n,i,j,k=0;
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
k=0;
for(i=0;i<n-1;i++)
{
    if(a[i]<=a[i+1])
    {
        
    }
    else
    {
        k++;
    }
}
if(k==0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
