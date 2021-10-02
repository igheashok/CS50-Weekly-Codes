#include <stdio.h>
#include <cs50.h>

//Prototype! This indicated that there is a function specified at the end of the code
//We have to declare this prototype, so that the compiler first refers to the created function at the end, and then executes the code
//The significance of the Prototype is that it has semicolon at the end. This distinguishes Prototype from the rest of the Libraries
void meow(void);

int main(void)
{
    for (int i = 0; i < 5; i++)
    //Calling the created function
    {
        meow();
    }
}

//Function creation
    void meow(void)
    {
        printf("meow\n");
    }

//Function is created outside the curly brackets of the main function
