#include <iostream>
using namespace std;

int minvalue(int arr[], int size)
{
    int min = INT32_MAX ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min ;
}
int maxvalue(int arr[], int size)
{
    int max = INT32_MIN ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max ;
}

int main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cout << "Enter " << i+1 << " Element :- ";
        cin >> arr[i];
    }
    int min = minvalue(arr, size) ;
    int max = maxvalue(arr, size);
    cout <<"Minimum value :- " << min << endl;;
    cout <<"Maximum value :- " <<  max << endl;

}