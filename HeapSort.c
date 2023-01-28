#include <stdio.h>
  
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
void heapify(int arr[], int n, int i) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }  
  
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }  
  
    if (largest != i) 
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }    
    
    for (int i = n - 1; i >= 0; i--) 
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void display(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");
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

    heapSort(array,size);

    printf("Array after the process of Sorting: ");
    display(array,size);

    return 0;
}