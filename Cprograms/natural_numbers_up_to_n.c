#include <stdio.h>

int main()
{
    int count, counter;

    printf("Up to which number you want to print natural numbers? ");
    scanf("%i", &count);
    counter = 1;
    printf("The first %i natural numbers are ", count);
    printf("%i", counter);
    while (counter < count)
    {
        printf(", ");
        counter = counter + 1;
        printf("%i", counter);
    }
    printf(".\n");

    return 0;
}
