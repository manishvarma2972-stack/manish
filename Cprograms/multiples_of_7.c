#include <stdio.h>

int main()
{
  int multiplier, count, product;
  printf("How many multiples of 7 you want to print? ");
  scanf("%i", &count);
  multiplier = 1;
  product = 7 * multiplier;
  printf("The first %i multiples of 7 are %i", count, product);
  count = count - 1;
  while (count > 0)
  {
    multiplier = multiplier + 1;
    product = 7 * multiplier;
    printf(", %i", product);
    count = count - 1;
  }
  printf(".\n");
 
  return 0;
}
