// A Simple c program to demonstrate the use of char data type.

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("The ASCII value of %c is %d\n", ch, ch);
  return 0;
}
// Output:
// Enter a character: a
// The ASCII value of a is 97
// Enter a character: A
// The ASCII value of A is 65
