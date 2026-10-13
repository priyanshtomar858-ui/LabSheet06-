#include <iostream>
using namespace std;

int main()
{
    int first[10][10], second[10][10], product[10][10] = {};
    int rows1, columns1, rows2, columns2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> columns1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> columns2;

    if (columns1 != rows2)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter first matrix:" << endl;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns1; j++)
            cin >> first[i][j];

    cout << "Enter second matrix:" << endl;
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < columns2; j++)
            cin >> second[i][j];

    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns2; j++)
            for (int k = 0; k < columns1; k++)
                product[i][j] += first[i][k] * second[k][j];

    cout << "Product matrix:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }

    return 0;
}
