#include "stdio.h"
#include "math.h" // 数学库函数的头文件声明
int main()
{
  float x, y; // 存在(0 <= x < 1)
  scanf("%f", &x);
  if (x < 0)
  {
    y = x;
  }
  else if (0 <= x && x < 1)
  {
    y = sqrt(2 * x + 6); /* sqrt ’数学‘库函数 意思为开根方 */
  }
  else if (x >= 1)
  {
    y = x / 9;
  }
  printf("%f", y);
}

/*  {
  int x, y;
  scanf("%d", &x);
  if (x < 1)
  {
    y = x;
  }
  else if (1 <= x && x < 10)
  {
    y = 2 * x - 1;
  }
  else if (x >= 10)
  {
    y = 3 * x - 11;
  }
  printf("%d", y);
}   */