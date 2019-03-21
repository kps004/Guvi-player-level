#include <stdio.h>

int main()
{
    char s[100][50];
    int i,j,l,k,m,n,z,f;
    scanf("%d %d",&n,&z);
    scanf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]",s[i]);
    }
    
    k=0;l=0;m=1;
    
    for(i=0;i<n-1;i++)
    {
        l=0;
        f=0;
        for(j=0,k=0;(s[i][j]!='\0')||(s[i+1][k]!='\0');j++,k++)
        {
            if(s[i+1][j]==s[i][j])
            {
                l++;
                f=1;
            }
        }
        if((l==k)&&(f==1))
        {
           m++;
        }
    }
  //  printf("%d",l);

if(m==z)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
