#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *createLinkedList(struct Node *head)
{
    struct Node *new_node,*ptr;
    int data;
    printf("Enter -1 to end taking the inputs \n");
    printf("Enter the data: ");
    scanf("%d",&data);
    while(data != -1)
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node -> data = data;
        if(head == NULL)
        {
            new_node -> next = NULL;
            head = new_node;
        }
        else
        {
            ptr = head;
            while(ptr -> next != NULL)
            {
                ptr = ptr -> next;
            }
            ptr -> next = new_node;
            new_node -> next = NULL;
        }
        printf("Enter the data: ");
        scanf("%d",&data);
    }
    return head;
}

struct Node *display(struct Node *head)
{
    struct Node *ptr = head;
    if(head == NULL)
    {
        printf("The Linked List Is Empty \n");
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

    return head;
}

struct Node *InsertionAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr -> next = head;

    return ptr;
}

struct Node *InsertionAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while(i != index-1)
    {
        p = p -> next;
        i++;
    }

    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;

    return head;
}

struct Node *InsertionAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head;

    while(p -> next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
}

int main(int argc, char const *argv[])
{
    int option;
    int data;
    int index;
    do
    {
        printf(" ***** MAIN MENU ***** \n");
        printf("1. Creation of a Singly Linked List. \n");
        printf("2. Display the Linked List. \n");
        printf("3. Insertion at the First. \n");
        printf("4. Insertion at the Index. \n");
        printf("5. Insertion at the End. \n");
        printf("6. Exit. \n");
        printf("Enter the Option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                head = createLinkedList(head);
                printf("Linked List Is Created");
                break;
            
            case 2:
                head = display(head);
                break;

            case 3:
                printf("Enter the data you wnt to insert: ");
                scanf("%d",&data);
                head = InsertionAtFirst(head,data);
                break;    

            case 4:
                printf("Enter the data that you wnat to insert: ");
                scanf("%d",&data);
                printf("Enter the index where you want to insert: ");
                scanf("%d",&index);
                head = InsertionAtIndex(head,data,index);
                break;

            case 5:
                printf("Enter the data that you want to insert: ");
                scanf("%d",&data);
                head = InsertionAtEnd(head,data);
                break;
        }
    }while(option != 6);
    
    if(option == 6)
    {
        printf("Program is Finished!!!");
    }

    return 0;
}