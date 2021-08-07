#include "stdio.h"
int main()
{
  int a = 1, b = 2, c = 3;
  char flag;
  flag = b >= 2 && c <= 3;
  switch (a)
  {
  case 1:
    switch (flag)
    {
    case 0:
      printf("**");
      break;
    case 1:
      printf("%%"); // 输出一个 %
      break;
    }
  case 2:
    switch (c)
    {
    case 0:
      printf("$$");
      break;
    case 1:
      printf("&&");

      break;
    default:
      printf("##");
    }
  }
}