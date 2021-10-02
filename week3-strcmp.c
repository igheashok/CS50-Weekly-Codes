#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name[] = {"ashok", "shubham", "varun"};
    string number[] = {"8108232387", "9870200859", "9820677737"};

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name[i], "ashok") == 0)
        {
            printf("Number Found: %s\n", number[i]);
            return 0;
        }
    }
    printf("No Data Found\n");
    return 1;
}
