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

void IndexInsertion(int array[], int size, int capacity, int element, int index)
{
    if(size >= capacity)
    {
        printf("Insertion is not possible \n");
    }
    else
    {
        for(int i=size-1;i>=index;i++)
        {
            array[i+1] = array[i];
        }
        array[index] = element;
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

    int element;
    printf("Enter the element that you want to insert: ");
    scanf("%d",&element);

    int index;
    printf("Enter the index where you want to insert: ");
    scanf("%d",&index);

    printf("The array before the insertion is: ");
    display(array,size);

    IndexInsertion(array,size,100,element,index);
    size = size+1;

    printf("The array after the insertion is: ");
    display(array,size);

    return 0;
}
