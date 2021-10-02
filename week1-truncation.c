#include <stdio.h>
#include <cs50.h>

int main()
{
    // Get input from users
    int x = get_int("x: ");
    int y = get_int("y: ");

    //Division
    float z = (float) x / (float) y;

    // Result function
    printf("%f\n", z);

    //Here, if we don't use cast, the program would truncate the data types of x and y variables
    //Meaning: It would not consider the decimal numbers.
    //No need for creating a new variable 'z', if we don't need to use cast. We can add the operators in the Print function
}
