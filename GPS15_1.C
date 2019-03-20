/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100][50];
    int i,j,l,k,m,n;
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]",s[i]);
    }
    
    k=0;l=0;m=0;
    
    for(i=0;i<n-1;i++)
    {
        l=0;
        for(j=0,k=0;(s[i][j]!='\0')||(s[i+1][k]!='\0');j++,k++)
        {
            if(s[i+1][j]==s[i][j])
            {
                l++;
            }
        }
        if(l==k)
        {
            printf("yes");
            break;
        }
    }
  //  printf("%d",l);

if(i==n-1)
{
    printf("no");
}
    return 0;
}
