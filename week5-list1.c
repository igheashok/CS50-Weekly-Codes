#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));            //Dynamic way of allocating memory
    if (list == NULL)                               //Arrays are static and cannot be changed later
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *temp = malloc(4 * sizeof(int));            //realloc can be used
    if (temp == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 3; i++)                     //Copying data to array "temp"
    {
        temp[i] = list[i];
    }

    temp[3] = 4;

    free(list);

    list = temp;                                    //Renaming the array back to "List"

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);                                     //Memory freeing
}
