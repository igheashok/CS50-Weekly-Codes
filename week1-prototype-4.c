#include <stdio.h>
#include <cs50.h>

//Prototype
int getpositiveint(void);

int main()
{
    int i = getpositiveint();
    if(i < 1)
    {
        printf("Chutiye barobar value daal");
    }
    else
    {
    printf("Your value is: %d", i);
    }
}

int getpositiveint(void)
{
    int n;
    {
        n = get_int("Positive Integer: ");
    }
    return n;
}
