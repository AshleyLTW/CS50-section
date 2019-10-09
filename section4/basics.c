#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int value;
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

        // TODO: Allocate a new node N.
        node *n = malloc(sizeof(node));
        n->value = x;
        n->next = NULL;
		// TODO: Add N to head of linked list.
		n->next = list;
		list = n;
    }

	// TODO: Print all nodes.
	for (node *seek = list; seek != NULL; seek = seek->next)
	{
	    printf("%i\n", seek->value);
	}
	// TODO: Free all nodes

    node *seek = list;
    while(seek != NULL)
    {
        node *temp = seek;
        seek = seek->next;
        free(temp);
    }
}