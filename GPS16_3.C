

#include <stdio.h>

int main()
{
    char s[10000];
    int i,j,k,l,m;
   scanf("%[^\n]",s);
    scanf("\n");
     scanf("%d",&k);
    for(l=0;s[l]!='\0';l++);
    for(i=k-1;i<l;i=i+2)
    {
        printf("%c",s[i]);
    }

    return 0;
}
