
#include <stdio.h>

int main()
{
    char s[10000],c[]="answer";
    int i,j,k,l;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++);
    
    s[l]=' ';
    for(i=0;i<7;i++)
    
    { 
        l++;
        s[l]=c[i];
    }
for(i=0;i<l;i++)
{
    printf("%c",s[i]);
}
    return 0;
}
