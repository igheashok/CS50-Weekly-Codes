#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *name = malloc((5 * sizeof(char)));
    name = "Ashok";                             //Something assigned to pointers is ultimately-
    printf("%s\n", name);                       //assigned inside the memory it is pointed to.



    int *number = malloc(sizeof(int));
    *number = 1234567;
    printf("%d\n", *number);

    //char pointer and int pointer are treated differently!
}

