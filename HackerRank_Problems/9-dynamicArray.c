#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, q, i, j, k, x, y, m, last_answer;
  scanf("%d %d", &n, &q);
  int *arr = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
    arr[i] = 0;
  for (i = 0; i < q; i++)
  {
    scanf("%d %d %d", &x, &y, &k);
    if (x == 1)
    {
      arr[(y ^ last_answer) % n] += k;
      last_answer = y;
    }
    else
    {
      m = (y ^ last_answer) % n;
      printf("%d\n", arr[m]);
    }
  }
  return 0;
}