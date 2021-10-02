#include <cs50.h>
#include <stdio.h>
int main(void) 
{
    string answer = get_string ( "Who the fuck are you?\n" );
    printf ( "Hey fuck off %s\n", answer );
}
