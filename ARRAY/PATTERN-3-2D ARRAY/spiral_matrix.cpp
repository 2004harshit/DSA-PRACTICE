#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the roe and column : ";
    cin >> row >> col;
    int array[row][col];
    cout << "Enter the vaue in matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << endl;

    cout << "2d matrix is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "   ";
        }
        cout << endl;
    }

    cout << "after the spiral traversal : ";
    int top = 0, left = 0;
    int bottom = row - 1, right = col - 1;
    while (bottom >= top || right >= left)
    {
        // iteration 1
        for (int i = left; i <= right; i++)
        {
            cout << array[top][i] << " ";
        }
        top++;
        // iteration2
        for (int i = top; i <= bottom; i++)
        {
            cout << array[i][right] << " ";
        }
        right--;

        // iteration 3

        for (int i = right; i >= left; i--)
        {
            cout << array[bottom][i] << " ";
        }
        bottom--;
        // iteration 4
        for (int i = bottom; i >= top; i--)
        {
            cout << array[i][left] << " ";
        }
        left++;
    }
    return 0;
}