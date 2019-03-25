/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char s[100],t,c[100];
int i,j,l=0,m=0,f=0,r=65;;
scanf("%[^\n]",s);
scanf("\n");
scanf("%[^\n]",c);
while(s[l]!='\0')
{
    l++;
}
while(c[m]!='\0')
{
    s[l]=c[m];
    m++;
    l++;
    
}
for(i=0;i<l;i++)
{
    t=s[i];
    
    for(j=i;j<l;j++)
    {
        if(t==r)
        {
            r++;
            f++;
            break;
        }
       }
}
printf("f=%d",f);
if(f==26)
{
    printf("complementary");
}
else
{
    printf("non-complementary");
}

    return 0;
}
