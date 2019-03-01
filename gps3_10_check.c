/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[1000],s2[1000],t;
    int i,j,k,l1,l2,n,l=0;
    
    gets(s1);
    gets(s2);
    scanf("%d",n);
    for(l1=0;s1[l1]!='\0';l1++);
    for(l2=0;s2[l2]!='\0';l2++);
    for(i=0;i<l1;i++)
    {
        t=s1[i];
    for(j=0;j<l2;j++)
    {
        if(s1[j]==t)
        {
          l++;
          break;
        }
    }
        
        
    }
    if(l1-l==n)
    {
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}
