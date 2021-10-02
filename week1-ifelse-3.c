#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //User input
    char c = get_char("Do you agree?\n");

    //Conditions
    if (c == 'y' || c == 'Y')
    {
        printf("The terms are agreed!\n");
    }
    else if (c == 'n'|| c == 'N')
    {
        printf ("The terms are NOT agreed!!!\n");
    }

    //Here while comparing characters we use single quote ''
    //Condition is specified only when "if" is present
    //When there is olny else, all other possibilities are considered. If the other possibilities are also specific, then "if else" is used
    //Here we needed capital and small Y in the if condition
    //Hence,  we use the || sign. This is used as an OR in C language
    //This saves a lot of lines in the program
}
