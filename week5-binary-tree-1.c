#include <stdio.h>
#include <stdlib.h>

typedef struct node                                     //Node structure creation
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void printElements(node *NODE);                         //Prototype for printing elements

int main(void)
{
    node *head = malloc(sizeof(node));                  //Node4 creation
    if (head == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    head->number = 4;
    head->left = NULL;
    head->right = NULL;


    node *temp = malloc(sizeof(node));                  //Node2 creation
    if (temp == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    temp->number = 2;
    temp->left = NULL;
    temp->right = NULL;
    head->left = temp;


    temp = malloc(sizeof(node));                        //Node6 creation
    if (temp == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    temp->number = 6;
    temp->left = NULL;
    temp->right = NULL;
    head->right = temp;


    temp = malloc(sizeof(node));                        //Node1 creation
    if (temp == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    temp->number = 1;
    temp->left = NULL;
    temp->right = NULL;
    head->left->left = temp;


    temp = malloc(sizeof(node));                        //Node3 creation
    if (temp == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    temp->number = 3;
    temp->left = NULL;
    temp->right = NULL;
    head->left->right = temp;


    temp = malloc(sizeof(node));                        //Node5 creation
    if (temp == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    temp->number = 5;
    temp->left = NULL;
    temp->right = NULL;
    head->right->left = temp;

    temp = malloc(sizeof(node));                        //Node7 creation
    if (temp == 0)
    {
        printf("Unable to allocate memory for node!\n");
        return 1;
    }
    temp->number = 7;
    temp->left = NULL;
    temp->right = NULL;
    head->right->right = temp;

    printElements(head);                                //Output
    printf("\n");

    free(temp);                                         //Memory freeing
    free(head);
}

void printElements(node *NODE)
{
    if (NODE == NULL)
    {
        return;
    }

    printf("%d", NODE->number);

    printElements(NODE->left);
    printElements(NODE->right);
}
