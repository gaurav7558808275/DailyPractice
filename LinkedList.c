#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}Node;

// create a new Node
Node * CreateNode(int data)
{
    Node* temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    printf("Node %d created at address %p\n" ,data, temp);
    return temp;
}

// Insert data into specific node

// searching in a LinkedList - return true or false

int SearchNode(Node* base, int target)
{
    while(base != NULL)
    {
        if(base->data == target)
        {
            return 0;
            printf("found");
        }
        else
        base = base->next;
    }
    return 1;
    printf(" not found");
}

int main()
{
    printf("Hello World - Linked list\n");

    Node* n = CreateNode(1);
    n->next = CreateNode(2);
    n->next->next = CreateNode(3);

    SearchNode(n,2);

    return 0;
}