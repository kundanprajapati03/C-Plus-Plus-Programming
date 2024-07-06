#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = 1;

    // while (start < size)
    // {
    //     swap(arr[start], arr[end]);
    //     start += 2;
    //     end += 2;
    // }

    // second method
    for(int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // printing array elements
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}