#include <stdio.h>

int main()
{
  int d;
  int i, j;
  printf("输入一个正整数:");
  scanf("%d", &d);
  i = 2;
  while (d >= i)
  {
    while (d % i == 0)
    {
      printf("%d ", i);
      d = d / i;
    }
    i = i + 1;
  }
}