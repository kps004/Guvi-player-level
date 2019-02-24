

#include <stdio.h>

int main()
{
    char t,s[10000],c;
    int i,n,j,k,l=0,max=0,r,p;
gets(s);
for(n=0;s[n]!='\0';n++);
    for(i=0;i<n;i++)
    {    l=0;
        t=s[i];
        for(j=i+1;j<n-1;j++)
        {
          if((t==s[j])&&(t!='\0'))
          {
               s[j]='\0';
              l++;
          }
        }
        if(max<l)
        {
           c=t;
           
        }
    }
    printf("%c",c);
    return 0;
}
