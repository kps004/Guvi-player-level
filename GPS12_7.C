
#include <stdio.h>

int main()
{
    char s[1000];
    int i,l;
    scanf("%[^\n]",s);
    
for(l=0;s[l]!='\0';l++);
for(i=l-1;i>=1;i--)
{
    printf("%c-",s[i]);
}
printf("%c",s[i]);

    return 0;
}
