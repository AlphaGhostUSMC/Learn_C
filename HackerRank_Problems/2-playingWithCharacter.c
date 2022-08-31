#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char ch;
  char s[100];
  char sentence[100];
  // scanf("%c\n", &ch);
  scanf("%c\n%s\n%[^\n]%*c", &ch, s, sentence);
  // scanf("", sentence);
  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s\n", sentence);
  return 0;
}