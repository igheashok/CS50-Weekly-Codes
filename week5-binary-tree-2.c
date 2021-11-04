#include <stdio.h>
#include <stdlib.h>


typedef struct node                                 //Node structure creation
{
    int number;
    struct node *left;
    struct node *right;
}
node;


void printElements(node *NODE);                     //Prototype
node * createNode(int n);


int main(void)
{
    node *head = createNode(4);                     //Nodes creation
    head->left = createNode(2);
    head->right = createNode(6);
    head->left->left = createNode(1);
    head->left->right = createNode(3);
    head->right->left = createNode(5);
    head->right->right = createNode(7);

    printElements(head);                            //Output
    printf("\n");

    free(head);                                     //Memory freeing
}



void printElements(node *NODE)                      //Function for printing output
{
    if (NODE == NULL)
    {
        return;
    }

    printf("%d", NODE->number);

    printElements(NODE->left);
    printElements(NODE->right);
}



node * createNode(int n)                            //Function for nodes creation
{
    node *temp = malloc(sizeof(node));
    temp->number = n;
    temp->right = temp->left = NULL;
    return temp;
}
