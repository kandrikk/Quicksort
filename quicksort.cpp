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


int main()
{
    int n;
    std::cout << "Введите количество массива: ";
    std::cin >> n;
    int *arr = new int [n];
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    std::cout << "\nОтсортированный массив: ";

    printArray(arr, n);

    std::cout << std::endl;
}