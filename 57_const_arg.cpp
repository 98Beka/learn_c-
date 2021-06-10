#include <iostream>
using namespace std;

//can't change const value;
void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 10;
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
}

void main()
{
}