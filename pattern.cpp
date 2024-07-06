#include <iostream>
using namespace std;
int main(){

    int a = 5;
    int i = 1;
    while (i <= a)
    {
        int j = 1;
        while (j <= a)
        {
            cout << a+1-j;
            j++;
        }
        cout << endl;
        i++;
    }
    
}