#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string s = get_string("Input string: ");

//Normal printf Function
    printf("Output: %s\n", s);


//Using \0 In Conditions
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");


//String Length Function
//Note: strlen() requires a Library included called <string.h>
     for (int i = 0; i < strlen(s); i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");

//String Length Function (Same, But More Optimized)
     for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");

}

