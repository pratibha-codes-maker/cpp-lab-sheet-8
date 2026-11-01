#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100], size, key;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1)
    {
        cout << "Element found at position: " << result + 1;
    }
    else
    {
        cout << "Element not found.";
    }

    return 0;
}
