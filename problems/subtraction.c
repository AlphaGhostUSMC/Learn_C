// Program to get two numbers and print their difference

#include <stdio.h>
#include <conio.h>

int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("\nDifference of %d and %d is %d", a, b, a - b);
  getch();
  return 0;
}