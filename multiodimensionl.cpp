#include <iostream>
using namespace std;
int main()
{
    int row, colu;
    cout << "Enter the size of array";
    cin >> row;
    cin >> colu;
    int arr[row][colu];
    cout << "Enter the element of array \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colu; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout<<" normal printing of array0\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colu; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << " retreverse printing of array\n";
    for (int i = 0; i < colu; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << "\t";
        }
         cout << endl;
    }
   
}
