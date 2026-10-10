#include <stdio.h>

int main()
{
  int count, square_number, square_value;

  printf("Up to which number you want to print square series?\n");
  scanf("%i", &count);
  square_number = 1;
  printf("The square series up to %i is %i", count, square_number);
  square_number = square_number + 1;
  square_value = square_number * square_number;
  while (square_value <= count)
  {
    printf(", %i", square_value);
    square_number = square_number + 1;
    square_value = square_number * square_number;
  }
  printf(".\n");

  return 0;
}
