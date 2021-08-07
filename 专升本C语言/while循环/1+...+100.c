#include "stdio.h"
int main()
{
  int i = 1, sum = 0;
  while (i <= 100)
  {
    // i++;
    sum = sum + i;
    i++;
    }
  printf("%d", sum);
}
// 使用while计算累和相加时，变量未赋值，将自储一个随机数
