#include <stdio.h>
int main()
{
  int a, b, max;
  scanf("%d,%d", &a, &b);
  if (a > b) // 判断 a > b ?
  {
    max = a; // a确实大于b,将max赋值给a
  }
  else
  {
    max = b; // 否则（a < b）将max赋值给b
  }
  printf("%d\n", max); // 输出max
}