#ifndef FUNCTION
#define FUNCTION

#include <iostream>

// quicksort
int hoarePartition(int arr[], int low, int high);
void quicksort(int *arr, int low, int high);

// helpers
void cin_arr(int *arr, int n);
void cout_arr(int *arr, int n);

#endif