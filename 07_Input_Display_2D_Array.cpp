#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10], rows, columns;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter matrix elements: ";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];

    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
