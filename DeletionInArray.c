#include<stdio.h>
#include<stdlib.h>

void display(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");
}

void IndexDeletion(int array[], int size, int index)
{
    for(int i=index;i<size;i++)
    {
        array[i] = array[i+1];
    }
}

int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int array[100];
    printf("Enter the Elements of an array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    int index;
    printf("Enter the index where you want to delete: ");
    scanf("%d",&index);

    printf("The array before the deletion is: ");
    display(array,size);

    IndexDeletion(array,size,index);
    size = size-1;

    printf("The array after the deletion is: ");
    display(array,size);

    return 0;
}
