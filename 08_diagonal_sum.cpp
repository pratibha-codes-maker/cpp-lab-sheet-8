#include <iostream>
using namespace std;

// Function to find sum of diagonal elements
int diagonalSum(int matrix[10][10], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + matrix[i][i];
    }

    return sum;
}

int main()
{
    int matrix[10][10], size;

    cout << "Enter size of square matrix: ";
    cin >> size;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Sum of diagonal elements: "
         << diagonalSum(matrix, size);

    return 0;
}