#include <stdio.h>

int main()
{
    int count, counter;

    printf("Up to which number you want to print even numbers? ");
    scanf("%i", &count);
    counter = 0;
    printf("The even numbers up to %i are %i", count, counter);
    counter = counter + 2;
    while (counter <= count)
    {
        printf(", %i", counter);
        counter = counter + 2;
    }
    printf(".\n");

    return 0;
}
