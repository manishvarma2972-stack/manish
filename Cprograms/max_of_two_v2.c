#include <stdio.h>

int main()
{
  int first_number, message, second_number;

  printf("To compare two numbers.\n");
  printf("Enter the first number: ");
  scanf("%i", &first_number);
  printf("Enter the second number: ");
  scanf("%i", &second_number);
  message " is larger than "; 
  if (first_number > second_number)
  {
    printf("%i %s %i.\n", first_number, message, second_number);
  }
  if (second_number > first_number)
  {
    printf("%i %s %i.\n", second_number, message, first_number);
  }
  

  return 0;
}
