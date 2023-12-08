#include <iostream>
using namespace std;
int main()
{
    int row = 3, col = 4;
    int arr[row][col] = {{1, 2, 3, 5}, {7, 8, 9, 4}, {4, 9, 7, 3}};
    cout << " the printing of actual array is \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << "the printing of retreverse array is\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)

        {

            cout<<arr[j][i];
        }
        cout << endl;
    }
}