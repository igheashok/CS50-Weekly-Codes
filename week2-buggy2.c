#include <stdio.h>
#include <cs50.h>

//Prototype
int get_negative_int(void);

int main(void)
{
   int n = get_negative_int();
}

int get_negative_int(void)
{
    int i;
    do
    {
        i = get_int("Enter negative integer: ");
    }
    while (i >= 0);
    printf("Thank You For Your Input\nThe Value You Entered IS: %i\n", i);
    return i;
}
