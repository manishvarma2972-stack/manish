#include <stdio.h>

int main()
{
  int multiplicant, multiplier, multiple;

  printf("Which multiplication table you want to print?\n");
  scanf("%i", &multiplicant);
  multiplier = 1;
  printf("The multiplication table of %i is \n", multiplicant);
  while (multiplier <= 10)
  {
    multiple = multiplicant * multiplier;
    printf("%i * %i = %i\n", multiplicant, multiplier, multiple);
    multiplier = multiplier + 1;
  }

  return 0;
}
