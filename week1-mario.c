#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    for(int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n\n");

    for(int j = 0; j < 5; j++)
    {
    for(int k = 0; k < 5; k++)
    {
        printf("#");
    }
    printf("\n");
    }
}
