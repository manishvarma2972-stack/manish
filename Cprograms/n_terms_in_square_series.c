#include <stdio.h>

int main()
{
  int count, square_number, square_value;

  printf("How many terms you want to print in square series?\n");
  scanf("%i", &count);
  square_number = 1;
  printf("The first %i terms in square series are %i", count, square_number);
  square_number = square_number + 1;
  square_value = square_number * square_number;
  while (square_number <= count)
  {
    printf(", %i", square_value);
    square_number = square_number + 1;
    square_value = square_number * square_number;
  }
  printf(".\n");

  return 0;
}
