#include <stdio.h>

int main()
{
  int sum, product, num1, num2;

  printf("To find two numbers given their sum and product.\n");
  printf("Enter the sum of two numbers: ");
  scanf("%i", &sum);
  printf("Enter their product: ");
  scanf("%i", &product);
  num1 = 0;
  num1 = num1 + 1;
  num2 = sum - num1;
  while (num1 * num2 != product)
  {
    num1 = num1 + 1;
    num2 = sum - num1;
  }
  printf("The sum of two numbers is %i and their product is %i. The two numbers are %i and %i\n", sum, product, num1, num2);

  return 0;
}

