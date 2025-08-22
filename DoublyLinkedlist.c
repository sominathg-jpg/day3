#include <stdlib.h>
#include <stdio.h>

// node of the doubly linked list

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// this is a function for creating a new node
struct Node *create_node(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode->prev = NULL;
    printf("node is created..\n");
    return newNode;
}
// function for display the list
void display_list(struct Node *head)
{

    printf("head in print %p\n", head);
    while (head != NULL)
    {
        printf("[%p|%d|%p] ", head->prev, head->data, head->next);
        head = head->next;
    }
}

struct Node *deleting_node(struct Node *head, int data)
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("there is no list...\n");
    }
    else
    {
        while (temp != NULL)
        {
            // if seleceted node is a head node
            if (temp->data == data && temp == head)
            {
                temp = temp->next;
                temp->prev=NULL;
                printf("selected node is head node that why head pointer shifted on the next step\n");
                return temp;
            }
            else if (temp->next->data == data)
            {
                temp->next = temp->next->next;
                temp->next->prev = temp;
                printf("node deleted..\n");
                return temp;
            }
            temp = temp->next;
        }
    }
    return temp;
}

struct Node *insert_at_the_starting(struct Node *node, struct Node *head)
{
    struct Node *tepm = head;
    if (tepm == NULL)
    {
        head = node;
        printf("list is created\n");
    }
    else
    {
        node->next = head;
        head->prev = head;
        head = node;
        printf("node attached..\n");
    }
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    int choice;
    head = NULL;
    int ele;
    do
    {
        printf("\ninsert node\n");
        printf("delete node\n");
        printf("display node\n");
        printf("Enter option:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element for node:\n");
            scanf("%d", &ele);
            // create node fuction
            temp = create_node(ele);
            head = insert_at_the_starting(temp, head);
            display_list(head);
            break;
        case 2:
            // deleting a node on the given data
            printf("Enter element for node:\n");
            scanf("%d", &ele);
            head = deleting_node(head, ele);
            display_list(head);
            break;
        case 3:
            display_list(head);
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    } while (1);

    return 0;
}