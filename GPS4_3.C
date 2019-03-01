/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a[100][100],n,p,q,i,j,f,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        f=0;
        if(a[i][j]==1)
        { p=i;q=j;
          if((a[p-1][q]==0)||(p==0))
          f++;
          if((a[p+1][q]==0)||(p==n-1))
          f++;
          if((a[p][q-1]==0)||(q==0))
          f++;
          if((a[p][q+1]==0)||(q==n-1))
          f++;
            
        }
        if(f==4)
        {
            c++;
        }
    }
}
printf("%d",c);
    return 0;
}
