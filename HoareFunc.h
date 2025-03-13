#include <iostream>

// Функция для разбиения Хоара
int hoarePartition(int arr[], int low, int high) {
    int pivot = arr[low]; // Опорный элемент (первый элемент)
    int i = low - 1;       // Индекс для левой части
    int j = high + 1;      // Индекс для правой части

    while (true) {
        // Ищем элемент больше опорного в левой части
        do {
            i++;
        } while (arr[i] < pivot);

        // Ищем элемент меньше опорного в правой части
        do {
            j--;
        } while (arr[j] > pivot);

        // Если индексы пересеклись, возвращаем j
        if (i >= j) {
            return j;
        }

        // Меняем местами arr[i] и arr[j]
        std::swap(arr[i], arr[j]);
    }
}

void quicksort(int *arr, int low, int high)
{
    if (low >= high || low < 0)
    {
        return;
    }
    int p = hoarePartition(arr, low, high);
    quicksort(arr, low, p);
    quicksort(arr, p+1, high);
}