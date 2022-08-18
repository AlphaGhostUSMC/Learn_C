//  C Program to Show ASCII Value of given Character

#include <stdio.h>
#include <conio.h>
void main()
{
  char ch;
  printf("Enter a Character: ");
  scanf("%c", &ch);
  printf("\nThe ASCII value of %c is %d", ch, ch);
  getch();
}