
#include <stdio.h>
int main()
{
    
 char s[10000],c[1000];
 int i,j,k,l,n,m;
 scanf("%[^\n]",s);
 scanf("\n");
 scanf("%[^\n]",c);
 
 for(l=0;s[l]!='\0';l++);
 
 for(m=0;c[m]!='\0';m++);
 
for(i=0;i<l;i++)
{
    for(j=0;(j<m)&&(k<m);j++)
    {
        if(s[i]==c[j])
        {
            k++;
            break;
        }
    }
}
if(k==m)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
