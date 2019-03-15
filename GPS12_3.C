/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int d,m,y,f=0;
    scanf("%d %d %d",&d,&m,&y);
    if(d<=31)
    {
        
    }
    else
    {
        f++;
    }
    if(m<=12)
    {
        
    }
    else
    {
        f++;
    }
    if((y>=100)&&(y<=5000))
    {
        
    }
    else
    {
        f++;
    }
    if(f!=0)
    {
        printf("n0");
    }
    else
    {
        printf("yes");
    }

    return 0;
}
