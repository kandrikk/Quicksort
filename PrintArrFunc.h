

void cin_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void cout_arr(int *arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        std::cout << arr[i] << " ";
    }    
    std::cout << std::endl;
}