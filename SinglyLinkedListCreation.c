#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *ptr = head;
    if(head == NULL)
    {
        printf("The Created Linked List is empty\n");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d -> ", ptr -> data);
            ptr = ptr -> next;
        }
        printf("NULL \n");
    }
}

int main(int argc, char const *argv[])
{
    /* Taking Nodes As An Input */
    struct Node *head;
    struct Node *two;
    struct Node *three;
    struct Node *four;
    struct Node *five;
    struct Node *six;

    /* Allocating Memory */
    head = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));
    five = (struct Node *)malloc(sizeof(struct Node));
    six = (struct Node *)malloc(sizeof(struct Node));

    /* Setting Value to the Nodes */
    head -> data = 45;
    two -> data = 65;
    three -> data = 78;
    four -> data = 80;
    five -> data = 85;
    six -> data = 96;

    /* Connecting Link */
    head -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = six;
    six -> next = NULL;

    printf("The Linked List is: ");
    display(head);

    return 0;
}
