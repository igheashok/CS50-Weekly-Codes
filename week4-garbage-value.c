#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;
                                    //malloc returns the pointer to the allocated memory
    x = malloc(sizeof(int));        //Doubt: This memory is allocated to the pointer and not to the variable itself
                                    //So the variable x doesn't have an allocated memory
                                    //Ans: the pointer x already has an allocated memory when we declare i: int *x;
                                    //There is no way to declare a pointer without assigning a memory to it
                                    //So there is not need for malloc to assign a memory to the pointer.
                                    //malloc assigns memory to the pointee i.e. variable x though we have not declared the variable yet
                                    //And the address of the first byte of the variable is stored in the pointer finally
    *x = 42;
    *y = 13;

    y = x;

    *y = 13;

}
