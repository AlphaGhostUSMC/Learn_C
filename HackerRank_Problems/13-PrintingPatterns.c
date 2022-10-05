#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  // Complete the code to print the pattern.
  for (int i = 0; i <= (2 * n - 2); i++)
  {
    for (int j = 0; j <= (2 * n - 2); j++)
    {
      int t1 = abs(i - n + 1);
      int t2 = abs(j - n + 1);
      if (j == 0)
        printf("%d", (int)fmax(t1, t2) + 1);
      else
        printf(" %d", (int)fmax(t1, t2) + 1);
    }
    printf("\n");
  }
  return 0;
}