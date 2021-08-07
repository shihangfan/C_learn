#include "stdio.h"
int main()
{
    int a=1,b=3,result;
//条件运算符:表达式1 ? 表达式2 : 表达式3;
    result = a > b ? a * b : a + b;
    printf ("%d\n",result);
}