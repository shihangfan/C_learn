#include "stdio.h"
int main()
{
  int sum;
  int i, j;
  for (i = 0; i < 10; i++)

  {
    for (j = 0; j < 10; j++)
    {
      if (j <= i) // 防止输出两遍
      {
        sum = i * j;
        printf("%d*%d=%d\t", i, j, sum);
      }
    }
    printf("\n");
    printf("\n");
  }
}