#include<stdio.h>
#include<stdlib.h>
#define max 10

void restoreHeapUp(int *Heap, int index)
{
    int value = Heap[index];
    while( (index>1) && (Heap[index/2] < value))
    {
        Heap[index]=Heap[index/2];
        index /= 2;
    }
    Heap[index]=value;
}

void RestoreHeapDown(int *Heap,int index,int n)
{
    int val = Heap[index];
    int j=index*2;
    while(j<=n)
    {   
        if((j<n) && (Heap[j] < Heap[j+1]))
        {
            j++;
        }
        if(Heap[j] < Heap[j/2])
        {
            break;
        }
        Heap[j/2]=Heap[j];
        j=j*2;
    }
    Heap[j/2] = val;
}

int main(int argc, char const *argv[])
{
    int Heap[max],n,i,j;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=1;i<=n;i++)   
    {
        scanf("%d",&Heap[i]);
        restoreHeapUp(Heap, i); // Heapify
    }

    // Delete the root element and heapify the heap
    j=n;
    for(i=1;i<=j;i++)
    {   
        int temp;
        temp=Heap[1];
        Heap[1]= Heap[n];
        Heap[n]=temp;
        n = n-1; // The element Heap[n] is supposed to be deleted
        RestoreHeapDown(Heap,1,n); // Heapify
    }
    n=j;
    printf("The sorted elements are: ");
    for(i=1;i<=n;i++)
    {
        printf("%d, ",Heap[i]);
    }
    
    return 0;
}