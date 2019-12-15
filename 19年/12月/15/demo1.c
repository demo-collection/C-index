#include <stdio.h>

int main()
{
  int i, j, k, t, m = 0, tt, max;
  char c = '0', d = '0';
  int a[100], b[100], temp[100] = {0};
  for (i = 0; c != '\n'; i++)
  {
    scanf("%d", &a[i]);
    scanf("%c", &c);
  }
  t = i;
  for (j = 0; d != '\n'; j++)
  {
    scanf("%d", &b[j]);
    scanf("%c", &d);
  }
  k = j;
  for (i = 0; i < t; i++)
  {
    for (j = 0; j < k; j++)
    {
      if (a[i] != b[j])
      {
        if (j == k - 1)
          temp[m++] = a[i];
      }
      else
        break;
    }
  }
  for (j = 0; j < k; j++)
  {
    for (i = 0; i < t; i++)
    {
      if (b[j] != a[i])
      {
        if (i == t - 1)
          temp[m++] = b[j];
      }
      else
        break;
    }
  }
  for (i = 0; i < m; i++)
  {
    max = i;
    for (j = i + 1; j < m; j++)
      if (temp[j] > temp[max])
        max = j;
    tt = temp[max];
    temp[max] = temp[i];
    temp[i] = tt;
  }
  for (i = 0; i < m - 1; i++)
    printf("%d ", temp[i]);
  printf("%d", temp[i]);
  return 0;
}