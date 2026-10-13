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
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
