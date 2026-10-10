#include <stdio.h>

int goal(int sum, int product);
int main()
{
    
    goal(4, 4);
    goal(6, 9);
    goal(12, 12);

    return 0;
}
int goal(int sum, int product)
{
	int num1, num2;

	num1 = 0;
	num1 = num1 + 1;
	num2 = sum - num1;
	while (num1 * num2 != product)
	{
	  num1 = num1 + 1;
	  num2 = sum - num1;
	}
	printf("The sum of two numbers is %i and their product is %i. The two numbers are %i and %i.\n", sum, product, num1, num2);
	
	return 0;
}
