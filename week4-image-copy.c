#include <stdio.h>
#include <cs50.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: copy SOURCE DESTINATION\n");
        return 1;
    }

    FILE *source = fopen(argv[1], "r");
    if (!source)
    {
        printf("Could not open\n");
        return 1;
    }

    FILE *destination = fopen(argv[2], "w");
    if (!destination)
    {
        fclose(source);
        printf("Could not create\n");
        return 2;
    }

    BYTE buffer;                                        //Doubt solved: BYTE has a predefined memory
    while (fread(&buffer, sizeof(BYTE), 1, source))     //Data cannot be directly transferred from one file to another.
    {                                                   //It needs a temporary buffer to store data
        fwrite(&buffer, sizeof(BYTE), 1, destination);  //Doubt: Why "&" sign? Ans: Because buffer is not a string, and hence not a pointer.
    }                                                   //In the previous example, buffer was declared as a string: BYTE buffer[3]

    fclose(source);
    fclose(destination);
}
