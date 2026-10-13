#include <iostream>
using namespace std;

int main()
{
    int numbers[100], size, searchElement;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    cout << "Enter element to search: ";
    cin >> searchElement;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == searchElement)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element is present in the array";
    else
        cout << "Element is not present in the array";

    return 0;
}
