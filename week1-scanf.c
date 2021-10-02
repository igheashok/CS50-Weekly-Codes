#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //No comments please
    int gajare = get_int("What is the IQ of Gajare?\n");
    printf("You entered the IQ of Gajare as: %d\n", gajare);
    if (gajare > 0)
    {
        printf("You are expecting more from Gajare\n");
    }
    else
    printf("Sahi jawaab!!! 10 crore jeet chuke hai aap\n");

    //second phase
   
    printf("Enter the value of Prashant, Rushi, Varun, Reuben\n");
    int prashant, rushi, varun, reuben;
    scanf("%d %d %d %d", &prashant, &rushi, &varun, &reuben);
    printf("The values entered by you are: %d %d %d %d\n", prashant, rushi, varun, reuben);
    
    //In the above code, scanf is the function that scans all the variables
    //Then in the 1st arguement, we specify the types of variables, and we repeat them according to the no. of times we want the input.
    //In the 2nd arguement, we specify the exact names of the variables with their exact address. Their address is denoted by & sign.
    //Also, you can create the variables in a different line before the scanf function. Or you can just put it in the same line for the design of the code.
    //Earlier line 19 & 20 were merged with an 'equals to' sign. But no matter what input you give for reuben, the O/P will always be 4. Why?
    //The scanf returns an int value, and that value is the number of inputs mentioned in the function i.e four.
    //Hence the value of the variable has to be mentioned separate.
}
