#include <stdio.h>

int main (void)
{
  int a, b;
  puts ("Input: ");
  scanf("%d", &a);
  b = a * 365;
  printf("\n%d\n", b);//Age in days
  return 0;
}

