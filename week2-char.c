#include <stdio.h>
#include <cs50.h>

int main (void)
{
   //Char
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    printf("%i %i %i\n", c1, c2, c3);

//String
    string s = "Hello";
    printf("%c %c %c %c %c %c %c %c\n", s[0], s[1], s[2], s[3], s[4], s[5], s[6], s[100]);
}
