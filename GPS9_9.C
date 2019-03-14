#include <stdio.h>

int factorial(int n) {
   int f;

   for(f = 1; n > 1; n--)
      f *= n;

   return f;
}

int npr(int n,int r) {
   return factorial(n)/factorial(n-r);
}

int main() {
   int n, r;

  scanf("%d %d",&n,&r);

   printf(" %d", npr(n,r));

   return 0;
}
