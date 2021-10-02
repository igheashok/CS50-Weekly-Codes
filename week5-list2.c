#include <stdio.h>
#include <stdlib.h>

typedef struct node                                                 //struct node creation
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;                                              //Head creation


    node *n = malloc(sizeof(node));                                 //1st node creation
    if (n != NULL)
    {
        n->number = 1;
        n->next = NULL;
    }


    list = n;                                                       //Head - node1 linkage


    n = malloc(sizeof(node));                                       //node2 creation
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;


    list->next = n;                                                 //node1 - node2 linkage


    n = malloc(sizeof(node));                                       //node3 creation
    if (n == NULL)
    {
        free(list);
        free(list->next);
        return 1;
    }
    n->number = 3;
    n->next = NULL;


    list->next->next = n;                                           //node2 - node3 linkage


    int i = 1;
    for (node *temp = list; temp != NULL; temp = temp->next)        //Output
    {
        printf("node%d: %d\n", i, temp->number);
        i++;
    }


    while (list == NULL)                                            //Memory freeing
    {
        node *temp = list->next;
        free(list);
        list = temp;
    }
}
