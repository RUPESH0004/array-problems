// swaping alternate no
#include <iostream>
using namespace std;
// reverse printing of an arry
void swap(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
        cout << arr[i] << " " << arr[i + 1] << " ";
    }

    cout << endl;
}
void reversingPosition(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// swaping without swap function
void swapingw(int arr[], int size)
{
    int first;
    for (int i = 0; i <= size - 1; i += 2)
    {
        if (i + 1 < size)
        {
            first = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = first;
        }

        cout << arr[i] << " " << arr[i + 1] << " ";
    }
    cout << endl;
}
void printing(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 4, 6, 4, 7, 5};
   reverse(arr,6);
   printing(arr,6);
}