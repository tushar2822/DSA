/* Implementing Stack using array */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 10

int stack[max],top = -1;

void push(int stack[], int value)
{
    if(top == max-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = value;
    }
}

int pop(int stack[])
{
    int value;
    if(top == NULL)
    {
        printf("Underflow \n");
    }
    else
    {
        value = stack[top];
        top = top - 1;
        return value;
    }
}

int peek(int stack[])
{
    if(top == NULL)
    {
        printf("Stack is Empty \n");
    }
    else
    {
        return stack[top];
    }
}

void display(int stack[])
{
    if(top == -1)
    {
        printf("Stack is empty \n");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int choice;
    int value;
    do
    {
        printf("***** Main Menu ***** \n");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. PEEK \n");
        printf("4. DISPLAY \n");
        printf("5. EXIT \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value that you want to insert: ");
                scanf("%d",&value);
                push(stack,value);
                break;

            case 2:
                value = pop(stack);
                if(value != -1)
                {
                    printf("The value of deleted from stack is: %d \n", value);
                }    
                break;

            case 3:
                value = peek(stack);
                if(value != -1)
                {
                    printf("The value of stored at the top of the stack is: %d \n", value);
                }    
                break;

            case 4:
                display(stack);
                break;    
        }
    } while (choice != 5);
    
    return 0;
}
