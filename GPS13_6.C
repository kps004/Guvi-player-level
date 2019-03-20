/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

  long int a[10000],i,j,t,k,l,n;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  for(i=0;i<n-1;i++)
  {
      if(a[i]>a[i+1])
      {
          t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
          
          for(j=i;j>0;j--)
          {
              if(a[j]<a[j-1])
              {
                  t=a[j];
                  a[j]=a[j-1];
                  a[j-1]=t;
                  
              }
          }
      }
  }
  
  for(i=0;i<n;i++)
  {
      t=a[i];
      l=0;
      for(j=i+1;j<n;j++)
      {
          if(t==a[j])
          {
             l++;  
             a[j]='\0';
             
          }
      }
      l++;
      if(l<k)
      {
          if(a[i]!='\0')
          printf("%d ",a[i]);
      }
  }
    return 0;
}
