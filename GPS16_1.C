

#include <stdio.h>

int main()
{
    char s[10000];
    int i,j=0,k;
    scanf("%[^\n]",s);
    for(k=0;s[k]!='\0';k++);
    
    for(i=0;i<k;i++)
    {
        if((s[i]=='a')||(s[i]=='b'))
        {
            
        }
        else
        {
           j++; 
        }
    }
    if(j<=1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
