#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        int j = 1 & i;
        cout << 1 << " & " << i << " = " << j << endl;
    }
}