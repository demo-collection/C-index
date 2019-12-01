#include <stdio.h>

int main()
{
  float sum = 0.0f;
  for (int k = 1; k < 100; k++)
  {
    sum += 1.0 / k;
  }
  printf("1+1/2 + 2/3 + ... + 1/100 = %0.2f\n", sum);
  return 0;
}