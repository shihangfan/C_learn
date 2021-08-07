#include "stdio.h"
int main()
{
  int a;
  scanf("%d", &a);
  if (a % 2 != 1) // 判断a取余值后是否非0
  {
    printf("偶数"); // 奇数取余非0 输出
  }
  else
  {
    printf("奇数"); // 偶数取余不非0 输出
  }
}