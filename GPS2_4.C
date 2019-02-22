
#include <stdio.h>

int main()
{
    char s[1000];
    int i,n;
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++)
    {
    scanf("%c",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        switch(s[i])
        {
                       case 'a': s[i]='\0';
                       break;
                       case 'e': s[i]='\0';
                       break;
                       case 'i': s[i]='\0';
                       break;
                       case 'o': s[i]='\0';
                       break;
                       case 'u': s[i]='\0';
                       break;
                       case 'A': s[i]='\0';
                       break;
                       case 'E': s[i]='\0';
                       break;
                       case 'I': s[i]='\0';
                       break;
                       case 'O': s[i]='\0';
                       break;
                       case 'U': s[i]='\0';
                       break;
                       
        }
    }
    
    for(i=n-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}
