
#include <stdio.h>


int main()
{
    char s[1000],t;
    int i,j,k,l;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++)
    {
        
    }
   
    for(i=0;i<l;i++)
    {
        if((s[i]>=65)&&(s[i]<=122))
        {
            t=s[i+1];
            if((t>=47)&&(t<=56))
            {
                k=s[i+1]-48; 
                for(j=0;j<k;j++)
                {
                    printf("%c",s[i]);
                }
                i++;
            }
        }
    }
    return 0;
}
