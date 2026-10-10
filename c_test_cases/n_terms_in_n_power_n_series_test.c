#include <stdio.h>

int n_power_n(int value);
int main()
{

	n_power_n(2);
	n_power_n(11);
	n_power_n(6);

	return 0;
}

int n_power_n(int value)
{
    int power,  counter, result;

    counter = 1;
    while (counter <= value)
    {
      result = 1;
      power = 0;
      while (power < counter)
      {
        result = result * counter;
        power = power + 1;
      }
      printf("%i", result);
      if (counter < value) 
        printf(", ");
      counter = counter + 1;
    }
    printf(".\n");

    return 0;
}
    
