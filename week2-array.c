#include <stdio.h>
#include <cs50.h>

//Prototype
float average(int length, int array[]);
const int TOTAL = 4;

int main()
{
    //The line below is ueseless if constant is already declared
    int total = get_int("Enter the total number of scores: ");

    int scores[TOTAL];

    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Enter the score: ");
        printf("\n");
    }

    for (int j = 0; j < TOTAL; j++)
    {
        printf("Entered score is %d\n", scores[j]);
    }

    printf("Average is: %f\n", average(TOTAL, scores));

}

float average(int length, int array[])
{
    int sum = 0;
    for (int k = 0; k < length; k++)
    {
        sum = sum + array[k];
    }
    return sum / (float)length;
}

