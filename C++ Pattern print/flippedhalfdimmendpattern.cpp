// Flipped Half dimand pattern
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            cout << "   ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "   ";
        }

        for (int j = 5; j > i; j--)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    return 0;
}