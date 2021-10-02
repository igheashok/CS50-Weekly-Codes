#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //User input
    int x = get_int("Enter the value of x");
    int y = get_int("Enter the value of y");

    //Bloody conditions
    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x == y)
    {
        printf("x is equal to y");
    }
    else
    {
        printf("x is smaller than y\n");
    }
    //The last else doesn't need if
}
