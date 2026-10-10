#include <stdio.h>

int main()
{
  int count, counter, result, power;

  printf("Up to which number you want to print N power N series? ");
  scanf("%i", &count);
  counter = 1;
  printf("The N power N series up to %i is ", count);
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
