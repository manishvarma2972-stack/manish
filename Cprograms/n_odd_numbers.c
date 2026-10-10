#include <stdio.h>

int main()
{
    int count, counter;

    printf("How many odd numbers you want to print? ");
    scanf("%i", &count);
    counter = 1;
    printf("The first %i odd numbers are %i", count, counter);
    counter = counter + 2;
    while (counter < count * 2)
    {
        printf(", %i", counter);
        counter = counter + 2;
    }
    printf(".\n");

    return 0;
}
