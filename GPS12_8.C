/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[10000],t;
    int a[100],i,j,k,l,p=0,len=0,max=0,q=0,string=0;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++);
    
    for(i=0;i<l;i++)
    {
        if((s[i]==' ')||(i==0))
        {
            len=0;
            if(i==0)
            {
                k=0;
            }
            else
            {
                k=i+1;
                
            }
            while((s[k]!=' ')&&(s[k]!='\0'))
            {
                len++;
                
                k++;
            }
            if(max<len)
            {
                string=i;
                max=len;
            }
            
        }
    }
    
    for(i=string;(s[i]!=' ')&&(s[i]!='\0');i++)
    {
        printf("%c",s[i]);
    }

    return 0;
}
