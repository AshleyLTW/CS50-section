#include <cs50.h>
#include <stdio.h>

// Write a program that prompts a user for integers and adds each integer one
// at a time to the head of a linked list.
// Once the user is done typing integers, print out the linked list (thhis
// will be in reverse order)

// NOTE: when testing this program, press ctrl-d when you're done entering numbers

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

        // TODO: Allocate a new node.
        // TODO: Add new node to head of linked list.

    }

    // TODO: Print all nodes.
    // TODO: Free all nodes.

}