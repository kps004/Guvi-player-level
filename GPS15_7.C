

#include <stdio.h>

int main()
{
    char s[10000],t[100];
    int n,i,j,k,l,last,front,f=0,p=0,insert;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++);
    for(last=l-1;s[last]!=' ';last--);
    for(front=0;s[front]!=' ';front++);
    
    for(i=front+1;i<last;i++)
    {
        if((s[i]==' ')||(i==front+1))
        {
            if(i==front+1)
            {
                k=i;
            }
            else
            {
                k=i+1;
                
            }
            p=k;
            
            f=0;
            while(s[k]!=' ')
            {
                t[f]=s[k];
                f++;
                k++;
            }
            for(j=f-1;j>=0;j--)
            {
                if(p<k)
                {
                s[p]=t[j];
                p++;
                }
                
            }
        }
    }
    
    for(i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
