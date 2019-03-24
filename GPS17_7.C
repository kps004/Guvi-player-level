

#include <stdio.h>

int main()
{
    char s[10000];
    int i,k=0,l=0;
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
           l++; 
        }
    }
    
    for(i=2;i<l;i++)
    {
        if(l%i==0)
        {
            k++;
        }
    }
    if(k==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
