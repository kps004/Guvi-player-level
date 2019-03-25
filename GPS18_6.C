/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char s[100],c[100];
int i,j,l=0,m=0,k=0;
scanf("%[^\n]",s);
scanf("\n");
scanf("%[^\n]",c);
while(s[l]!='\0')
{
    l++;
}
while(c[m]!='\0')
{
    m++;
}
k=0;
for(i=0;i<l;i++)
{
    
    for(j=0;j<m;j++)
    {
        if(s[i]==c[j])
        {
            c[j]='\0';
        }
    }
    
}
for(i=0;i<m;i++)
    if((c[i]>=65)&&(c[i]<=122))
    k=1;

if(k==0)
{
    printf("true");
}
else
{
    printf("false");
}
    return 0;
}
