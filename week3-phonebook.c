#include <stdio.h>
#include <cs50.h>
#include <string.h>

//Defining your custom data structure (or "Data Type")//
typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    person people[2];

    people[0].name = "ashok";
    people[0].number = "8108232387";

    people[1].name = "shubham";
    people[1].number = "9870200859";
}

//You can make it more dynamic by adding a FOR loop and get_string//
