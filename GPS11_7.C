

#include <stdio.h>

int main()
{
    char s[100],str[100];
    int count=1,i,j,k,l,m,p,f=0,q=0;
    scanf("%[^\n]",s);
    scanf("\n");
    scanf("%[^\n]",str);
    for(l=0;s[l]!='\0';l++);
    for(m=0;str[m]!='\0';m++);
count=1;
for(i=0;i<l;i++)
{
    
    if((s[i]==' ')||(count==1))
    {
        q++;
        if(count==1)
        {
            k=i-1;
        }
        else
        {
        k=i+1;
        }
        p=f=0;
        while(s[k]!=' ')
        {
            
            if(s[k]==str[p])
            {
                f++;
            }
            p++;
            k++;
        }
        if(f==m)
        {
            printf("%d ",q);
        }
        
    }
    count=0;

}
    return 0;
}
