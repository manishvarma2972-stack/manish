#include <stdio.h>

int main()
{
    int num1, num2, num3, product;

    printf("To multiply three numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    printf("Enter the third number: ");
    scanf("%i", &num3);
    product = num1 * num2 * num3;
    printf("The product of %i, %i and %i is %i.\n", num1, num2, num3, product);

    return 0;
}
