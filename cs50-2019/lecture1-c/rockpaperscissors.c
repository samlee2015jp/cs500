#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printRandoms(int lower, int upper, int count)
{
    int i, num;
    for (i = 0; i < count; i++)
    {
        num = (rand() % (upper - lower + 1)) + lower;
    }

    return num;
}

int main()
{
    int lower = 1, upper = 3, count = 1;
    srand(time(0));
    int randomValue = printRandoms(lower, upper, count);
    printf("I generated the number is: %d\n", randomValue);
    printf("You are Rock");
}