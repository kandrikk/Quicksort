#include <iostream>
#include "../include/function.h"

int main()
{
    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;
    int *arr = new int [n];
    std::cout << "Введите элементы массива: ";
    cin_arr(arr, n);

    quicksort(arr, 0, n - 1);

    std::cout << "\nОтсортированный массив: ";
    cout_arr(arr, n);
}