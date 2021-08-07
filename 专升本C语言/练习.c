#include "stdio.h"
int main()
{
  int a = 2, b = 7, c = 5;
  switch (a > 0) // 2 > 0  结果为真  1
  {
  case 1:          // 执行
    switch (b < 0) // 7 < 0 结果为假 0  下列分支没有可选项，跳过该switch语句
    {
    case 1: //  1 ≠ 0 不执行
      printf("@");
      break;
    case 2: //  2 ≠ 0 不执行
      printf("@");
      break;
    }
    switch (c == 5) // 5=5 结果为真 1
    {
    case 0:
      printf("*");
      break;
    case 1: // 执行 输出 #
      printf("#");
      break;
    case 2:
      printf("$");
      break;
    }
  default: // default执行原因：c:7: case1 没有设置break跳出语句,执行结束后 c:5 主switch语句仍在向下执行
    printf("&");
  }
}