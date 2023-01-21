#include<stdio.h>
#include<stdlib.h>

struct ArrayAsADT
{
    int TotalSize;
    int UsedSize;
    int *ptr;
};

void createArray(struct ArrayAsADT *array, int tSize, int Usize)
{
    array -> TotalSize = tSize;
    array -> UsedSize = Usize;
    array -> ptr = (int *)malloc(tSize*sizeof(int));
}

void display(struct ArrayAsADT *array)
{
    for(int i=0;i<array -> UsedSize;i++)
    {
        printf("%d, ",((array->ptr)[i]));
    }
    printf("\n");
}

void TakingInput(struct ArrayAsADT *array)
{
    for(int i=0;i<array->UsedSize;i++)
    {
        scanf("%d",&((array->ptr)[i]));
    }
}

int main(int argc, char const *argv[])
{
    struct ArrayAsADT marks;
    createArray(&marks,10,5);

    printf("We are taking the inputs: ");
    TakingInput(&marks);

    printf("We are displaying the values: ");
    display(&marks);
    
    return 0;
}