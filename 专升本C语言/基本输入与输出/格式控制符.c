#include "stdio.h"
int main()
{
   int n;
   for( n = 1; n < 20; n++)
   {
       if(n%5!=0)continue;
       printf("%d",n);
   }
   




}