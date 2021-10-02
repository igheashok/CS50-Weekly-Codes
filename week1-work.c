#include <stdio.h>
#include <cs50.h>

int main()
{
    // Get input from users
    float x = get_int("x: ");
    float y = get_int("y: ");

    // Result function
    printf("%f\n", x / y);
    
    //Phase 2
    printf("Enter the four values of a, b, c, d with spaces\n");
    int a, b, c, d;
    scanf("%d %d %d %d", &a , &b , &c , &d);
    printf("The values put by you are: %d %d %d %d\n", a , b , c , d);

    //Here, if we don't use cast, the program would truncate the data types of x and y variables
    //Meaning: It would not consider the decimal numbers.
}
