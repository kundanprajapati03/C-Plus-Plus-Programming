#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            cout << "  ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k >= i; k++)
        {
            cout << "  ";
        }

        for (int j = 5; j > 0; j--)
        {
            cout << "* ";
        }
        for (int j = 5; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}