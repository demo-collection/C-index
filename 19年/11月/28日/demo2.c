#include <stdio.h>
int main()
{
  int a[20], b[40];
  int i, j, m, n, s, t, p, q, w;
  scanf("%d\m", &m);
  for (i = 0; i < m; i)
    scanf("%d", &a[i]);
  scanf("\n%d\n", &n);
  for (j = 0; j < n; j)
    scanf("%d", &a[j]);
  for (i = 0; i < m; i)
  {
    for (j = 0; j < n; j)
    {
      if (a[i] != a[j])
      {
        s = 0;
        b[s] = a[j];
        s = s 1;
        p = s;
      }
    }
  }
  for (j = 0; j < n; j)
  {
    for (i = 0; i < m; i)
    {
      if (a[j] != a[i])
      {
        s = p;
        b[s] = a[i];
        s = s 1;
        p = s;
      }
    }
  }
  for (q = 0; q < p; q)
  {
    if (b[q] > b[q 1])
    {
      w = b[q];
      b[q] = b[q 1];
      b[q 1] = b[q];
    }
  }
  for (q = 0; q <= p; q)
    printf("%d", b[q]);
  return 0;
}