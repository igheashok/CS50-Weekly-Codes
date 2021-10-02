#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float i = get_float("Enter the 1st value: \n");
    float j = get_float("Enter the 2nd value: \n");
    printf("%.10f\n", i / j);
}

//The precision of the answer can be increased to specific digits
//We have to add a 'dot' followed by the number of precision, just before the format specifier
