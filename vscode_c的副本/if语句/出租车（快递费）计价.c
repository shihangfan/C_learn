#include <stdio.h>
int main()
{
  // 起步价8元，起步距离为2.5公里，每多一公里收费1.5元
  // 要求输入乘车距离，输出最后价格

  float x, y;      //x表示距离 y表示价格
  scanf("%f", &x); //输入一个距离
  if (x <= 2.5)    // x距离小于等于2.5时
  {
    y = 8.0; // 价格为8.0
  }
  else // 大于2.5时
  {
    y = 8.0 + (x - 2.5) * 1.5; // 起步收费8.0 + (目前公里数 - 起始公里数 = 多出来的公里数) * 每多一公里收费1.5
  }
  printf("最后的价格为：%f\n", y);
}