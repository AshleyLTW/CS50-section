#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // Allocate a new node.
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;


        // Add new nodes such that the linked list is always in ascending order
        if (list == NULL || x < list->number)
            {
                n->next = list;
                list = n;
            }
        else
        {
            node *ptr = list;
            while (ptr->next != NULL && x > ptr->next->number)
            {
                ptr = ptr->next;
            }
            n->next = ptr->next;
            ptr->next = n;
        }

    }

	// Print all nodes.
	for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

	// Free all nodes.
    node *ptr = list;
    while (ptr != NULL)
    {
        node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }

}
