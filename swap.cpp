// swaping alternate no
#include <iostream>
using namespace std;

// swaping with the use of swap function
void swap(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
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
    }
}
//to reversr an array
int reverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
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
    swap(arr, 6);
    printing(arr, 6);
    reverse(arr, 6);

    
}