#include <iostream>
using namespace std;

int main()
{
    int numbers[100], size, searchElement;
    int left, right, middle;
    bool found = false;

    cout << "Enter number of elements (sorted): ";
    cin >> size;

    cout << "Enter sorted integer array: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    cout << "Enter element to search: ";
    cin >> searchElement;

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        middle = left + (right - left) / 2;

        if (numbers[middle] == searchElement)
        {
            found = true;
            cout << "Element found at index " << middle;
            break;
        }
        else if (numbers[middle] < searchElement)
            left = middle + 1;
        else
            right = middle - 1;
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
