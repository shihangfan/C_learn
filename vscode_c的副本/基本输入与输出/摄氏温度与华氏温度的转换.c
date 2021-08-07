// 摄氏度与华氏度之间的转换：C = 5/9 * （ F - 32 ）

#include <stdio.h>
int main()
{
  float C, f;
  scanf("%f", &f);
  C = 5.0 / 9 * (f - 32); // 此处 5 / 9 应改为 5.0 / 9 或 5 / 9.0 否则 5 / 9 结果数据类型为 int 值为 0
  printf("%f", C);
}