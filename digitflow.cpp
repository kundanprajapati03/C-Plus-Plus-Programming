#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number :- ";
    cin >> a;

    int digit;
    // while (a != 0)
    // {
    //     digit = a % 10 ;
    //     cout << digit ;
    //     a = a/10;
    // }
    int ans = 0;
    while (a != 0)
    {
        digit = a % 10 ;
        ans = (ans * 10) + digit;
        a = a/10;
    }
    cout << ans;
}
