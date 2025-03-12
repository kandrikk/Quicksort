#include "function.h"

int main()
{
    int n;
    std::cout << "Введите количество элементов массива: ";
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