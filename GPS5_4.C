/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    
 char s[10000],t;
 int i,j,k,l;
 gets(s);
 scanf("\n");
 scanf("%d",&k);
 for(l=0;s[l]!='\0';l++);
 
 for(i=0;i<k;i++)
 {
     t=s[l-1];
     for(j=l-1;j>=0;j--)
     {
         s[j]=s[j-1];
     }
     s[0]=t;
 }
 printf("%s",s);
 
 
 


    return 0;
}
