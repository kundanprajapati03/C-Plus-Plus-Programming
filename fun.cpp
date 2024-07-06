#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Enter the value :- ";
    cin >> value;

    int Remaning, Note;

    Note = value / 2000;
    cout << "2000 Note = " << Note <<endl;
    value = value % 2000;

    Note = value / 500;
    cout << "500 Note = " << Note <<endl;
    value = value % 500;

    Note = value / 100;
    cout << "100 Note = " << Note <<endl;
    value = value % 100;

    Note = value / 50;
    cout << "50 Note = " << Note <<endl;
    value = value % 50;

    Note = value / 10;
    cout << "10 Note = " << Note <<endl;
    value = value % 10;

    Note = value / 1;
    cout << "1 Note = " << Note <<endl;
    value = value % 1;

}