#include <iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter the number :- ";
    cin >> a; 

    int sum = 0, multi = 1;
    while (a != 0)
    {
        multi = multi * (a % 10);
        sum = sum + (a % 10);
        a = a/10;
    }
    
    cout << multi << endl;
    cout << sum << endl;

    cout << multi - sum << endl;

}