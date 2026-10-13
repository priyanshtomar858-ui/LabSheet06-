#include <iostream>
using namespace std;

int main()
{
    int numbers[100], size;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}
