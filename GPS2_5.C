/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char t,s[10000],c;
    int i,n,j,k,l=0,max=0,r,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    for(i=0;i<n;i++)
    {    l=0;
        t=s[i];
        for(j=i+1;j<n-1;j++)
        {
          if((t==s[j])&&(t!='\0'))
          {
               s[j]='\0';
              l++;
          }
        }
        if(max<l)
        {
           c=t;
           
        }
    }
    printf("%c",c);
    return 0;
}
