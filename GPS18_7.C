/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char  s[10000],t[500],temp,min;
    int i,j,k,l,m,n,p,q;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++);
    
    for(i=0;i<l;i++)
    {
        if((s[i]==' ')||(i==0))
        {
            n=i+1;
            q=n;
            k=0;
            while(s[n]!=' ')
            {
                t[k]=s[n];
                n++;
                k++;
            }
            l=0;
            for(l=0;l<k;l++)
            {
              temp=t[l];
                for(j=i+1;j<l;j++)
                {
                    if(temp>t[j] )
                    {
                        min=a[j];
                        p=j;
                    }
                }
                s[p]=s[i];
                s[i]=min;
             
                 }
                 
                 for(l=0;l<k;l++)
                 {
                     s[q]=t[l];
                     q++;
                     
                 }
        }
    }

    return 0;
}
