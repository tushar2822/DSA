#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
    int temp = *a; 
    *a = *b;
    *b = temp;
}

void display(int array[], int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);

    for(int j=low;j<=high;j++)
    {
        if(array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void QuickSort(int array[], int low, int high)
{
    if (low < high) 
    {
        int position = partition(array, low, high);
        QuickSort(array, low, position - 1);
        QuickSort(array, position + 1, high);
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

    QuickSort(array,0,size-1);

    printf("Array after the process of Sorting: ");
    display(array,size);

    return 0;
}