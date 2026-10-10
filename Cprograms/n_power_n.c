#include <stdio.h>

int main()
{
  int number, result, power;

  printf("To compute N power N.\n");
  printf("Enter the number: ");
  scanf("%i", &number);
  printf("%i power %i is ", number, number);
  result = 1;
  power = 0;
  while (power < number)
  {
    result = result * number;
    power = power + 1;
  }
  printf("%i.\n", result);

  return 0;
}
