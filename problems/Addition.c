// Program to get two numbers and print their sum

#include <stdio.h>
#include <conio.h>

int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("\nSum of %d and %d is %d", a, b, a + b);
  getch();
  return 0;
}