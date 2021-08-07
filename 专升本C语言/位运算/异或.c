#include "stdio.h" 
int main()
{
int a=3,b=4;
// 交换 a b 的值
a = a ^ b ;
b = b ^ a ;
a = a ^ b ;

printf ("a=%d",a);
printf("\n");
printf ("b=%d",b);


}