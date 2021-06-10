#include <iostream>
using namespace std;

static void clear_dbl_arr(int rows, int **arr)
{
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
}

static int **create_dbl_arr(int rows, int cols)
{
    int **arr;

    arr = new int* [rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];
    return (arr);
}

int main()
{
    int rows = 5;
    int cols = 6;
    int **arr;
    
    cout << "enter rows count" << endl;
    cin >> rows;
    cout << "enter cols count" << endl;
    cin >> cols;
    arr = create_dbl_arr(rows, cols);
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++)
            arr[i][j] = rand() % 100000;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    clear_dbl_arr(rows, arr);
}