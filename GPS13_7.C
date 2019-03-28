#include <stdio.h>

int main()
{
    char s[10000],str[100];
    int l,m,n,k,i,j=0,f=0,z;
    scanf("%[^\n]",s);
    scanf("\n");
    scanf("%[^\n]",str);
for(l=0;s[l]!='\0';l++);
for(m=0;str[m]!='\0';m++);

for(i=0;i<l;i++)
{
    if((s[i]==' ')||(i==0))
    {
        f=0;
        j=0;
        if(i==0)
        {
            k=0;
        }
        else
        {
            k=i+1;
        }
        z=k;
        while(s[k]!=' ')
        {
            if(str[j]==s[k])
            {
                f++;
            }
            j++;
            k++;
            
            if(s[k]=='\0')
            break;
        }
      //  printf("f=%d, m=%d",f,m);
     if(f==m)
     {
         
        
         for(n=z;s[n]!=' ';n++)
         {
             s[n]='\0';
         }
     }
    }
}
    for(i=0;i<l;i++)
    printf("%c",s[i]);
    
    return 0;
    
}
