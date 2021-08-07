#include "stdio.h"
int main()
{
  int year;
  scanf("%d", &year);
  {
    if (year % 4 == 0 && year % 100 != 0 /*|| year % 400 == 0*/)
    {
      printf("为闰年");
    }
    else
    {
      printf("不为闰年");
    }
  }
}
