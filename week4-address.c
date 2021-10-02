#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i \n", *&n);       // In this case, the * and & sign neutralize each other
                                // & signs returns address of the variable
                                // * sign converts pointer into variable
                                // Pointer is a variable that contains address of other some other value

    int *p = &n;                // This is the way to declare a pointer
                                // Here we have declared a pointer variable and stored the address of the variable n
                                // n is an int type variable, hence the pointer type should be an int as well

    printf("%p \n", p);         // Format specifier of a pointer is %p
                                // A pointer occupies 8 bits of memory
}
