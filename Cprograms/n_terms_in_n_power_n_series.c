#include <stdio.h>

int main()
{
  int count, counter, result, power;

  printf("How many terms you want to print in N power N series?\n");
  scanf("%i", &count);

  counter = 1;
  printf("The first %i terms in N power N series are ", count);
  while (counter <= count)
  {
    result = 1;
    power = 0;
    while (power < counter)
    {
      result = result * counter;
      power = power + 1;
    }
    printf("%i", result);
    if (counter < count) 
      printf(", ");
    counter = counter + 1;
  }
  printf(".\n");

  return 0;
}
