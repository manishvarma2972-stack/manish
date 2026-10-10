#include <stdio.h>

int main()
{
  int maximum, first_number, second_number, third_number;

  printf("To compare three numbers.\n");
  printf("Enter the first number: ");
  scanf("%i", &first_number);
  printf("Enter the second number: ");
  scanf("%i", &second_number);
  printf("Enter the third number: ");
  scanf("%i", &third_number);
  maximum = first_number;
  if (second_number > maximum)
  {
    maximum = first_number;
  }
  if (third_number > maximum)
  {
    maximum = third_number;
  }
  printf("%i is greatest among %i, %i and %i", maximum, first_number, second_number, third_number);

  return 0;
}
