#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[100];
    int size;

    cout << "Enter number of students: ";
    cin >> size;

    cin.ignore();

    cout << "Enter student names:" << endl;
    for (int i = 0; i < size; i++)
        getline(cin, names[i]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < size; i++)
        cout << names[i] << endl;

    return 0;
}
