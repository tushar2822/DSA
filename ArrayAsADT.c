#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int total_size;
    int used_size;
    int *ptr;
};

void CreateArray(struct Array *arr, int T_size, int U_size)
{
    arr -> total_size = T_size;
    arr -> used_size = U_size;
    arr -> ptr = (int *)malloc(T_size*sizeof(int));
}

void display(struct Array *arr)
{
    for(int i=0;i<arr -> used_size;i++)
    {
        printf("%d , ",((arr -> ptr)[i]));
    }
}

void TakingInput(struct Array *arr)
{
    for(int i=0;i<arr -> used_size;i++)
    {
        scanf("%d",&((arr->ptr)[i]));
    }
}

int main(int argc, char const *argv[])
{
    struct Array marks;
    CreateArray(&marks,10,5);

    printf("We are taking the input: ");
    TakingInput(&marks);

    printf("We are displaying the values: ");
    display(&marks);

     return 0;
}
