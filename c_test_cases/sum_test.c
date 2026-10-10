#include <stdio.h>

int sum(int num1, int num2);
int main()
{
    int num1, num2;

    sum(7, 6);
    sum(88,99);
    sum(777, 999);
    
    return 0;
}

int sum(int num1, int num2)
{
	int sum;

	sum = num1 + num2;
	printf("The sum of %i and %i is %i.\n", num1, num2, sum);

	return 0;
}
