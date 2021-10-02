#include <stdio.h>
#include <cs50.h>

void swap(int *x, int *y);


int main(void)
{
    int ashok = 100;
    int reuben = 2;

    swap(&ashok, &reuben);
    printf("Value of Ashok is %i,\nValue of Reuben is %i", ashok, reuben);
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
