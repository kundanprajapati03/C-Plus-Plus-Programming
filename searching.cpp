#include <iostream>
#include <string>
#include <vector>
using namespace std;

void PrintArray(vector<int> arr)
{
    for (auto a : arr)
    {
        cout << a << " ";
    }
}

string linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return "Found !!";
        }
    }
    return "Not Found !!";
}

string binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end-start) / 2;

        if (arr[mid] == target)
        {
            return "Found !!";
        }
        else if (arr[mid] < target)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return "Not Found !!";
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};

    
    int n;
    cout << "Enter the Target of Array:- ";
    cin >> n;

    int target = n;

    // string result = linearSearch(arr, target);
    // cout << result << endl;

    string result = binarySearch(arr, target);
    cout << result << endl;

    return 0;
}