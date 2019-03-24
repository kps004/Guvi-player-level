/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100][50],t;
    int i,j,f=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]",s[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;s[i][j]!='\0';j++)
        {
            t=s[i][j];
            if((t=='a')||(t=='e')||(t=='i')||(t=='o')||(t=='u'))
            {
               f=1;
               
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
