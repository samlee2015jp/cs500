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

void getRockPaperScisoorsResult(int randomValue, char subjectPredicate[])
{
    if (1 == randomValue)
    {
        printf("%s Rock!\n", subjectPredicate);
    }
    else if (2 == randomValue)
    {
        printf("%s Paper!\n", subjectPredicate);
    }
    else if (3 == randomValue)
    {
        printf("%s Scissors!\n", subjectPredicate);
    }
}

int main()
{
    int lower = 1, upper = 3, count = 1;
    srand(time(0));
    int randomValue = printRandoms(lower, upper, count);
    getRockPaperScisoorsResult(randomValue, "I am");
    printf("Enter a number: 1:Rock, 2Paper, 3Scissors please!\n");
    int userInput;
    scanf("%d", &userInput);
    getRockPaperScisoorsResult(userInput, "You are");

}