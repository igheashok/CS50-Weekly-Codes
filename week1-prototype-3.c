#include <stdio.h>
#include <cs50.h>

//Prototype
int getpositiveint(void);

int main()
{
    int i = getpositiveint();
    printf("Your value is: %d", i);
}

int getpositiveint(void)
{
    int n;
    do
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 1);
    return n;
}
