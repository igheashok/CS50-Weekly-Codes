#include <stdio.h>
#include <cs50.h>
#include <stdint.h>

typedef uint8_t BYTE;                               //Doubt: What is uint8_t ???

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Please enter the file name\n");
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");

    if (!file1)                                     //It's a good practise to check whether the file is opened or not?
    {
        return 2;
    }

    BYTE bytes[3];                                  //A temporary variable to store data. Like buffer
    fread(bytes, sizeof(BYTE), 3, file1);

    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)       //Doubt: When we try to print these vales, another integers turn up!
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }

    fclose(file1);
}
