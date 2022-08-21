// Program to get two numbers and print their product

#include <stdio.h>
#include <conio.h>

int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("\nProduct of %d and %d is %d", a, b, a * b);
  getch();
  return 0;
}