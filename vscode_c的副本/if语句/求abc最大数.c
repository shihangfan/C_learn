#include "stdio.h"
int main()
{
  int a, b, c, max;
  scanf("%d,%d,%d", &b, &a, &c);
  if (a > b)
  {
    max = a;
  }
  else
  {
    max = b;
  }
  if (max < c)
  {
    max = c;
  }
  printf("%d", max);
}