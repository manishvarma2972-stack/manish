#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("To add two numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    sum = num1 + num2;
    printf("The sum of %i and %i is %i.\n", num1, num2, sum);

    return 0;
}
