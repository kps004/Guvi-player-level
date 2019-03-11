
#include <stdio.h>

int main()
{
   char s[1000],t,c[1000];
   int l,i,m,k=0;
   
 scanf("%[^\n]",s);
 scanf("\n");
 scanf("%[^\n]",c);
   for(l=0;s[l]!='\0';l++);
   for(m=0;c[m]!='\0';m++);
   for(i=0;i<l;i++)
   {
       if(s[i]==c[i])
       {
           
          k++;
       }
       else
       {
           t=c[i];
           if((s[i]>=97)&&(s[i])<=122)
           {
             t=t+32;
             if(t==s[i])
             {
                 k++;
             }
           }
           if((s[i]>=65)&&(s[i])<=92)
           {
               t=t-32;
               if(t==s[i])
               {
                   k++;
               }
           }
           
       }
   }
   if(k==l)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }

    return 0;
}
