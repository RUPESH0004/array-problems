#include <iostream>
using namespace std;
//using xor function 2^2=0;3^3=0;0^2=2 so unique no is 2
int unique(int arr[], int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
       ans=ans^arr[i];
       
    }
    cout<<ans;
    return ans;
}
int main()
{ 
    int arr[6]={1,8,2,1,8};
    unique(arr,6);

}