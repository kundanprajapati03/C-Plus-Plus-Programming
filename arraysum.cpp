#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of Array:- ";
    cin >> size ;

    int num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " Element :- ";
        cin >> num[i];
    }

    //sum of array is 
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + num[i];
    }
    cout << "The sum of all element is :- " << sum << endl;
    
}