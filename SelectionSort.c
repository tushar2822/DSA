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

int smallest(int array[], int k, int size)
{
    int position = k, small = array[k];
    for(int i=k+1;i<size;i++)
    {
        if(array[i] < small)
        {
            small = array[i];
            position = i;
        }
    }
    return position;
}

void SelectionSort(int array[], int size)
{
    int temp, position;
    for(int i=0;i<size;i++)
    {
        position = smallest(array,i,size);
        temp = array[i];
        array[i] = array[position];
        array[position] = temp;
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

    SelectionSort(array,size);

    printf("Array after the process of Sorting: ");
    display(array,size);

    return 0;

    return 0;
}
