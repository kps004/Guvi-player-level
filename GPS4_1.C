/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[1000];
  int i,j,o=0,c=0,l;
  scanf("%[^\n]",s);
for(l=0;s[l]!='\0';l++);

for(i=0;i<l;i++)
{
    if(s[i]=='(')
    {
        o++;
    }
    if(s[i]==')')
    {
        c++;
    }
}
if(c==o)
{
    printf("yes");
}
else{
    printf("no");
}
    return 0;
}
