#include <stdio.h>

int prime(int number);
int main()
{

	prime(2);
	prime(99);
	prime(1004);

	return 0;
}

int prime(int number)
{
    int square, prime_counter;

    prime_counter = 2;
    square = prime_counter * prime_counter;
    while (square <= number)
    {
        if (number % prime_counter == 0)
        {
          break;
        }
        prime_counter = prime_counter + 1;
        square = prime_counter * prime_counter;
     }
     if (square <= number)
     {
        printf("%i is not a prime number.\n", number);
     }
     if (square > number)
     {
        printf("%i is a prime number.\n", number);
     }
    
     return 0;
}






