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
// printing and element in array
void printing(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// finding an avrage an sum of all no in array
void avrage(int arr[], int size)
{
    int sum = 0, avg;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum is " << sum << endl;
    avg = sum / size;
    cout << "the avg is " << avg << endl;
}
// finding max and min value of an array
void maxmin(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "the mximum value is " << max << endl;
    cout << "the mnimum value is " << min << endl;
}
// addition of an odd and and even no of an array
void oddnEven(int arr[], int size)
{
    int oddNo = 0;
    int evenNO = 0;
    cout << "the odd no of in array " ;
    for (int i = 0; i < size; i++)
    {
        
        if (arr[i] % 2 != 0)
        {
            oddNo = arr[i];
           cout << evenNO ;
        }
        
    }
     cout << "the eve no of in array " ;
     for (int i = 0; i < size; i++)
    {
        
  
        if(arr[i] / 2 == 0)
        {
            evenNO = arr[i];
            cout << oddNo ;
        }
        cout<<endl;
    }
}
int main()
{
    int arr[6] = {1, 4, 6, 4, 7, 5};
    printing(arr, 6);
    avrage(arr, 6);
    maxmin(arr, 6);
    oddnEven(arr, 6);
}