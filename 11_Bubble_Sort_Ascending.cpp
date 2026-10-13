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

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Ascending order: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}
