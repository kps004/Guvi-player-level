/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[1000],t,g;
    int i,j,k,l,max,c=0;
    gets(s);
    for(l=0;s[l]!='\0';l++);
    
    for(i=0;i<l;i++)
    {  t=s[i]; 
        c=0;
        for(j=i+1;j<n-1;j++)
        {
             if(s[j]==t)
             {
                 c++;
                 s[j]='\0';
             }
        }
        s[i]='\0';
        if(max<c)
        {
            max=c;
            g=t;
        }
    }
    printf("%c",g);

    return 0;
}
