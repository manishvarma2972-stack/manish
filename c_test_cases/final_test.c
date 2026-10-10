#include <stdio.h>
int square(int num);
int msd(int num);
int sum_of_squares(int num1, int num2);
int sum_of_squares_of_msds(int num1, int num2);
int sq(int num);

int main()
{
    square(3);
    msd(558);
    sum_of_squares(10, 3);
    sum_of_squares_of_msds(33, 4);

    return 0;
}

int square(int count)
{
    int power, number;

    power = 1;
    number = 2;

    while (power < number)
    {
        count = count * count;
        power = power + 1;
    }
    printf("The square of 3 is %i.\n", count);

    return 0;
}

int msd(int count)
{
    int original = count;

    while (count >= 10)
    {
        count = count / 10;
    }
    printf("The Most siqnificant digit of %i is %i.\n", original, count);

    return count;
}

int sum_of_squares(int num1, int num2)
{
    int sum, power, number;

    int value_1 = sq(num1);
    int value_2 = sq(num2);
    sum = value_1 + value_2;
    printf("The sum of squares of %i and %i is %i.\n", num1, num2, sum);

    return sum;
}

int sq(int num)
{
    int power, number;

    power = 1;
    number = 2;

    while (power < number)
    {
        num = num * num;
        power = power + 1;
    }

    return num;
}

int sum_of_squares_of_msds(int num1, int num2)
{
    int msd1;
    int msd2;
    int sum;

    msd1 = msd(num1);
    msd2 = msd(num2);
    sum = sq(msd1) + sq(msd2);
    printf("The sum of squares of Most significant digits of %i and %i is %i.\n", num1, num2, sum);

    return sum;
}
