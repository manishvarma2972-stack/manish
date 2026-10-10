#include <stdio.h>

int main()
{
    int count, counter, product;

    printf("How many even numbers you want to print? ");
    scanf("%i", &count);
    counter = 0;
    printf("The first %i even numbers are %i", count, counter);
    counter = counter + 1;
    product = (counter * 2);
    while (counter < count)
    {
        printf(", %i", product);
        counter = counter + 1;
        product = (counter * 2);
    }
    printf(".\n");

    return 0;
}
