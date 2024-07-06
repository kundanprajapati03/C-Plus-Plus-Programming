#include <iostream>
using namespace std;

int main(){
    char input[20];

    int size = sizeof(input)/sizeof(char);

    for (int i = 0; i < size; i++)
    {
        // cout <<" Enter " << i+1 << " Element :- ";
        cin >> input[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}