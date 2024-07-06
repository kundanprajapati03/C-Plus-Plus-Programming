#include <iostream>
using namespace std;

int main()
{
    int even = 30;
    int odd = 35;
    int n = 0;

    for (int i = 0; i < 5; i++)
    {
        even = even + (i * 8);
        cout << even << " ";
        for (int j = i; j < i+1; j++)
        {
        odd = odd + (i * 6);
        cout << odd << " ";
        }
        
    }

    return 0;
}