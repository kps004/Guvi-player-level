
#include <stdio.h>

int main()
{
   char s[1000],t,c[1000];
   int l,i,k=0,m,j=0,p,q=0;
   scanf("%[^\n]",s);
   scanf("\n");
   scanf("%[^\n]",c);
   for(l=0;s[l]!='\0';l++);
   for(m=0;c[m]!='\0';m++);
   for(i=0;i<l;i++)
   {
      if(s[i]==' ')
      {
          k=0;
           p=i+1;
           j=0;
           while(p!=' ')
           {
               if(c[j]==s[p])
               {
                   k++;
               }
               else
               {
                   break;
               }
               p++;
               j++;
           }
           if(k==m)
           {
               q++;
           }
          
      }
    
   }
printf("%d",q);
    return 0;
}
