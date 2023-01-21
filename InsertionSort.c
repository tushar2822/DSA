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

void InsertionSort(int array[], int size)
{
    for(int i=1;i<size;i++)
    {
        int temp = array[i];
        int j = i-1;
        while((temp <= array[j]) && (j>=0))
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
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

    InsertionSort(array,size);

    printf("Array after the process of Sorting: ");
    display(array,size);

    return 0;
}