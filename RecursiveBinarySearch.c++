#include<iostream>
using namespace std;

int BinarySearch(int array[], int low, int high, int target)
{
    int mid;
    mid = low + ((high-low)/2);
    if(low <= high)
    {
        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            return BinarySearch(array,mid+1,high, target);
        }
        else
        {
            return BinarySearch(array,low,mid,target);
        }
    }
    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size];
    cout << "The element of an array are: ";
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }

    int target;
    cout << "Enter the value of target you want to find: ";
    cin >> target;

    int result = BinarySearch(array,0,size-1,target);

    cout << result << endl;

    cout << array[result] << endl;

    return 0;
}
