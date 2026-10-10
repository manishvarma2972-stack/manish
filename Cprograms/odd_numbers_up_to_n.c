#include <stdio.h>

int main()
{
    int count, counter;

    printf("Up to which number you want to print odd numbers? ");
    scanf("%i", &count);
    counter = 1;
    printf("The odd numbers up to %i are %i", count, counter);
    counter = counter + 2;
    while (counter <= count)
    {
        printf(", %i", counter);
        counter = counter + 2;
    }
    printf(".\n");

    return 0;
}
