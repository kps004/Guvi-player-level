
#include <stdio.h>

int main()
{
    char s[10000],t;
    int i,k,j,l,count=0;
    scanf("%[^\n]",s);
    for(l=0;s[l]!='\0';l++);
    for(i=0;i<l-1;i++)
    {
        if(((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))&&((s[i+1]!='a')&&(s[i+1]!='e')&&(s[i+1]!='i')&&(s[i+1]!='o')&&(s[i+1]!='u')))
        {
            count=count+2;
            i++;
            printf("count1=%d",count);
        }
        else
        if(((s[i+1]=='a')||(s[i+1]=='e')||(s[i+1]=='i')||(s[i+1]=='o')||(s[i+1]=='u'))&&((s[i]!='a')&&(s[i]!='e')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='u')))
        {
            count=count+2;
            i++;
            printf("count2=%d",count);
        }
    }
    
printf("%d   ",count);
    return 0;
}
