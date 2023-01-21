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

void BubbleSort(int array[], int size)
{
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int array[size];
    printf("Enter the elements of an array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Array before the process of Sorting: ");
    display(array,size);

    BubbleSort(array,size);

    printf("Array after the process of Sorting: ");
    display(array,size);

    return 0;
}