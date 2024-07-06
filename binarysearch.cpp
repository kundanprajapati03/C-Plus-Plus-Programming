#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target){

    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;
    // int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid ;
        }

        if (target > arr[mid])
        {
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        
        mid = (start + end)/2;
        // mid = start + (end - start)/2;
    }
    //Nothing Match;
    return 0;
}

int main(){
    int even[4]= {2,4,6,8};
    int odd[5] = {1,3,5,7,9};

    int op1 = BinarySearch(even, 4, 9);
    int op2 = BinarySearch(odd, 5, 11);

    cout << op1 << endl;
    cout << op2 << endl;

}