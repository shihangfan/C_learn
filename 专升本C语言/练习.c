#include "stdio.h"
int main()
{
  int sum = 0;
  for (int a = 0; a < 100; a++)
  {
    sum = a + sum;
  }
  printf("%d", sum);
}
