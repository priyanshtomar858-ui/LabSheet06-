#include <iostream>
using namespace std;

int main()
{
    int numbers[100], size;
    int left, right, middle;

    cout << "Enter number of elements (sorted in ascending order): ";
    cin >> size;

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    if (size <= 0)
    {
        cout << "Array is empty";
        return 0;
    }

    // In a sorted ascending array, the largest element is at the right end.
    left = 0;
    right = size - 1;

    while (left < right)
    {
        middle = left + (right - left) / 2;

        if (numbers[middle] < numbers[right])
            left = middle + 1;
        else
            right = middle;
    }

    cout << "Largest element = " << numbers[right];

    return 0;
}
