#include <stdio.h>
#include <cs50.h>

//Prototype! This indicated that there is a function specified at the end of the code
//We have to declare this prototype, so that the compiler first refers to the created function at the end, and then executes the code
//The significance of the Prototype is that it has semicolon at the end. This distinguishes Prototype from the rest of the Libraries
void meow();
//The first void represents that there is no output of the function, just a side-effect. Means the function doesn't return any value
//The second Void Represents the input of the function. Since we choose to give input to this function, we didn't use the second Void

int main(void)
{
    meow(10);
}

//Function creation
    void meow(int n)
    {
        for(int i = 0; i < n; i++)
        {
        printf("meow\n");
        }
    }

//Function is created outside the curly brackets of the main function
