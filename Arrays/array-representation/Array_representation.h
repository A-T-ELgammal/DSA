#include <iostream>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // cout << A[i] << " ";
        // cout << i[A] << " ";
        std::cout << *(arr + i) << " ";
        }
}
