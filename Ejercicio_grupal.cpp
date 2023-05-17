#include <iostream>
#include <string>
using namespace std;

int busca(int n, int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(n == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {0, -1, 4, 10, 45, 2, 15};
    int size = (sizeof(arr) / sizeof(arr[0]));

    cout << busca(100, arr, size) << endl;
}
