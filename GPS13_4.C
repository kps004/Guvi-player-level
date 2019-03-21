#include<stdio.h>
int main()
{
   int a[100],b,i,j,c=1,d=0;
  
  scanf("%d",&b);
  
  for(i=0;i<b;i++)
  
  scanf("%d",&a[i]);
 
 while(c)
   {d=0;
       for(i=0;i<b;i++)
       {
           if(c%a[i]==0)
           
           d++;
       }
     
     if(d==b)
     
     break;
       c++;
   }
   printf("%d",c);
}   
