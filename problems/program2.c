// Program 10

#include <stdio.h>

int main()
{
  int a, b, c, d;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  c = a + b;
  d = a - b;
  printf("\n%d + %d = %d", a, b, c);
  printf("\n%d - %d = %d", a, b, d);
  return 0;
}
