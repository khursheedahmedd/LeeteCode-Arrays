#include <iostream>

using namespace std;

void generatePascalTriangle(int numRows)
{
    int triangle[numRows][numRows];

    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    cout << "Pascal's Triangle for numRows = " << numRows << ":" << endl;
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int numRows;

    cout << "\nEnter the number of rows: ";
    cin >> numRows;

    generatePascalTriangle(numRows);

    return 0;
}