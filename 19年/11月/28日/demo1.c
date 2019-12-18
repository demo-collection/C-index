#include <stdio.h>

int main(int argc, char *argv[])
{
  int x1, x2, x3, x4, x5;
  int *pstart = &x1;
  int *pend = &x5;

  printf("pstart - pend的值为 % ld\n", pstart - pend);

  return 0;
}