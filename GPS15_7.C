/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100000],t;
    int f,i,n,j,k,l,m;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++);
    for(i=0;s[i]!=' ';i++)
    {
        if(s[i]!='\0'){
        printf("%c",s[i]);
        }
        else
          break;
    }
    if(i!=l)
    {
    for(i=i;s[i]!='\0';i++)
    {
        f=0;
        if(s[i]==' ')
        {
            n=i+1;
            while((s[n]!=' ')&&(s[n]!='\0'))
            {
               
               n++; 
            }
              if(s[n]=='\0')
                {
                    f=1;
                    break;
                }
           
                
                   for(j=n;j>=i+1;j--)
                   {
                      printf("%c",s[j]);
                      }
            
                
            i=n-1;
        }
    } 
            
    }
    ///printf("i=%d",i);
    
    for(j=i;j<l;j++)
    {
        printf("%c",s[j]);
    }
    

    return 0;
}
