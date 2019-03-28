

#include <stdio.h>

int main()
{
    char s[10000],t;
    int i,j,n,l;
    scanf("%[^\n]",s);
    scanf("\n");
    scanf("%c",&t);
    l=0;
    while(s[l]!='\0')
    {
           l++;        
    }
    n=t;
    
    
        for(j=0;j<l;j++)
        {
            
            for(i=0;i<l;i++)
         {
            if(s[i]==n)
            {
                n--;

                break;
            }
         }    
         if(n<48)
         {
             break;
         }
    }
    n++;
    

    if(n==48)
   {
    printf("yes");
   }
   else
      {
          printf("no");
      }

    return 0;
}
