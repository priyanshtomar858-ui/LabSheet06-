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

    int maximum = numbers[0];
    int minimum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maximum)
            maximum = numbers[i];

        if (numbers[i] < minimum)
            minimum = numbers[i];
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum;

    return 0;
}
