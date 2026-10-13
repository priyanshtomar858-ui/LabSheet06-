#include <iostream>
using namespace std;

int main()
{
    int numbers[100], size, searchElement, count = 0;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    cout << "Enter element to count: ";
    cin >> searchElement;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == searchElement)
            count++;
    }

    cout << "Occurrences = " << count;

    return 0;
}
