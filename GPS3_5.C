

#include <stdio.h>
#include <string.h>
int main()
{

char s[1000][1000],temp[1000],e;
int i,j,k,l,m,n,count,p=0,q=0,max=0;

scanf("%d",&n);
scanf("\n");
for(i=0;i<n;i++)
{
scanf("%s[^\n]",s[i]);
}

for(i=0;i<n-1;i++)
{   
    count=0;k=0;q=0;
         while(s[i][q]!='\0')
        {
            q++;
        }
    
    for(j=i+1;j<n;j++)
    {
        k=0;
        while(s[j][k]!='\0')
        {
            k++;
        }
        if(q>k)
        {
            q=k;
            p=j;
          count++;
        }
        else
        if(q==k)
        {
            count=0;
           for(m=0;m<10;m++)
           {
               if(s[p][m]>s[j][m])
              {
               p=j;   count++;
              }
           }
                
        }
    }
    if(count!=0)
    {
        strcpy(temp,s[i]);
        strcpy(s[i],s[p]);
        strcpy(s[p],temp);
    }
    
}
i=0;
while(i<n)
{
    printf("%s ",s[i]);
    i++;
}
    return 0;
}
