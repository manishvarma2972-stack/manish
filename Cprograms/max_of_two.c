#include <stdio.h>

int main()
{
  int first_number, second_number;

  printf("To compare two numbers.\n");
  printf("Enter the first number: ");
  scanf("%i", &first_number);
  printf("Enter the second number: ");
  scanf("%i", &second_number); 
  if (first_number > second_number)
  {
    printf("%i is bigger than %i.\n", first_number, second_number);
  }
  if (second_number > first_number)
  {
    printf("%i is bigger than %i.\n", second_number, first_number);
  }

  return 0;
}
