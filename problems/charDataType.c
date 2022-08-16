// char data type

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <stdbool.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("%c is a %s character\n", ch, isalpha(ch) ? "alphabetical" : "numeric");
  printf("%c is a %s character\n", ch, isdigit(ch) ? "numeric" : "alphabetical");
  printf("%c is a %s character\n", ch, isalnum(ch) ? "alphabetical or numeric" : "special");
  printf("%c is a %s character\n", ch, iscntrl(ch) ? "control" : "not control");
  printf("%c is a %s character\n", ch, isgraph(ch) ? "printable" : "not printable");
  printf("%c is a %s character\n", ch, islower(ch) ? "lowercase" : "uppercase");
  printf("%c is a %s character\n", ch, isprint(ch) ? "printable" : "not printable");
  printf("%c is a %s character\n", ch, ispunct(ch) ? "punctuation" : "not punctuation");
  printf("%c is a %s character\n", ch, isspace(ch) ? "space" : "not space");
  printf("%c is a %s character\n", ch, isupper(ch) ? "uppercase" : "lowercase");
  printf("%c is a %s character\n", ch, isxdigit(ch) ? "hexadecimal" : "not hexadecimal");
  return 0;
}
