#include <iostream>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        std::cout << arr[i] << " ";
    }    
}

int partition(int *arr, int lo, int hi)
{
    int pivot = arr[hi];
    int i = lo;

    for (int j = lo; j <= hi-1; j++)
    {
        if (arr[j] <= pivot)
        {
            std::swap (arr[j], arr[i++]);
        }
    }
    std::swap (arr[i], arr[hi]);
    return i;
}

void quicksort(int *arr, int lo, int hi)
{
    if (lo >= hi || lo < 0)
    {
        return;
    }
    int p = partition(arr, lo, hi);
    quicksort(arr, lo, p-1);
    quicksort(arr, p+1, hi);
}