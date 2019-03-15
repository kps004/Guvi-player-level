/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[1000],c[10000],t;
    int i,j,k,l,m;
    scanf("%[^\n]",s);
    scanf("\n");
    scanf("%[^\n]",c);
for(l=0;s[l]!='\0';l++);
for(m=0;c[m]!='\0';m++);
if(l>m)
{
    for(i=0;i<m;i++)
    {
        printf("%c",s[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%c",c[i]);
    }
}

else
{
    for(i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("%c",c[i]);
    }
}
    return 0;
}
