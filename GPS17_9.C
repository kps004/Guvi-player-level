#include <stdio.h>


int main()
{

char s[10000],e[1000],t;
int r,l=0,k,n=0,i=1,q=0,j,f=0,p=0;
scanf("%[^\n]",s);
for(l=0;s[l]!='\0';l++);
for(i=0;i<l;i++)
{
    t=s[i];
    p=0;
    f=0;
    for(j=i;j<l;j++)
    {
        if(t==s[j])
        {
           p++;  
           f=1;
        }
        else
        {
            break;
        }
    }
    
   
    if(f==1)
    {
        printf("%c%d",s[i],p);
      i=--j;
    }
}

    return 0;
}
