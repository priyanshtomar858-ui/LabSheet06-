#include <iostream>
using namespace std;

int main()
{
    int numbers[100], size, sum = 0;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum = " << sum;

    return 0;
}
