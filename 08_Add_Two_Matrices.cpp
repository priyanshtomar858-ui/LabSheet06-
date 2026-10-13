#include <iostream>
using namespace std;

int main()
{
    int first[10][10], second[10][10], sum[10][10];
    int rows, columns;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter first matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> first[i][j];

    cout << "Enter second matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> second[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            sum[i][j] = first[i][j] + second[i][j];

    cout << "Sum matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
