#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int array[], int size, int target)
{
    int low = 0;
    int high = size-1;
    int mid;

    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }

    return -1;
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

    int target;
    printf("Enter the target you want to find: ");
    scanf("%d",&target);

    int result;
    result = BinarySearch(array,size,target);
    printf("The target element is located at index: %d",result);

    return 0;
}
