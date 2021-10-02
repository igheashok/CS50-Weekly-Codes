#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    //    MALLOC    //
    char *name1 = get_string("Enter the name 1: ");
    char *name2 = malloc(strlen(name1) + 1);            //We add 1 for the terminating NULL character: \0
                                                        //malloc only allocates the bytes, and strlen() only calculates string length
                                                        //Hence, we need to add 1 for terminating character

    for (int i = 0; i <= strlen(name1); i++)             //This is how we copy a string.
    {                                                   //We have "<=" because we also need to include the terminating character
        name1[i] = name2[i];
    }



    //   POINTER ARITHMETIC    //
    //Pointer arithmetic is mathematical operations on addresses with pointers

    char *city = "kalyan";

    printf("%c", *city);
    printf("%c", *(city + 1));                  //We add directly to the pointer name
    printf("%c", *(city + 2));                  //This can be done only with string pointers

    free(name2);                                //Remember to free the allocated memory


    //   USE "VALGRIND" TO CHECK FOR MEMORY LEAKS    //
    //      Usage: valgrind ./program.name         //
}
