#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return 0;
}

int main(){
int even[6]= {2,4,6,8,10,12};
int odd[7] = {1,3,5,7,9,11};

int evenop = LinearSearch(even, 6, 18);
int oddop = LinearSearch(odd, 7, 33);

cout << evenop << endl;
cout << oddop << endl;

}