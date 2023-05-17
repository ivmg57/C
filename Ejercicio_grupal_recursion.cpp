#include <iostream>
#include <string>
using namespace std;

int busca(int n, int arr[], int size, int pos)
{
    if(n == arr[pos])
    {
        return pos;
    }
    else if(pos >= size)
    {
        return -1;
    }
    return busca(n, arr, size, pos+1);
}

int main()
{
    int arr[] = {0, -1, 4, 10, 45, 2, 15};
    int size = (sizeof(arr) / sizeof(arr[0]));

    cout << busca(2, arr, size, 0) << endl;
}
