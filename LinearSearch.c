#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int array[], int size, int target)
{
    for(int i=0;i<size;i++)
    {
        if(array[i] == target)
        {
            return i;
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
    result = LinearSearch(array,size,target);
    printf("The target element is located at index: %d",result);

    return 0;
}
