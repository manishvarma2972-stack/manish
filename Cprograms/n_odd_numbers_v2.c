#include <stdio.h>

int main()
{
  int count, counter;
  
  printf("How many odd numbers you want to print?\n");
  scanf("%i", &count);
  counter = 1;
  printf("The sum of %i odd numbers are %i", count, counter);
  count = count - 1;
  counter = counter + 2;
  while (count > 0) 
  {
    printf(", %i", counter);
    count = count - 1;
    counter = counter + 2;
  } 
  printf(".\n");

  return 0;
}
