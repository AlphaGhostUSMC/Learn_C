#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char *num = malloc(sizeof(char) * 1000);
  scanf("%s", num);
  int *freq = malloc(sizeof(int) * 10);
  for (int i = 0; i < 10; i++)
  {
    freq[i] = 0;
  }
  for (int i = 0; i < strlen(num); i++)
  {
    freq[num[i] - '0']++;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", freq[i]);
  }
  return 0;
}