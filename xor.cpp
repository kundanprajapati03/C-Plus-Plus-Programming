#include <iostream>
using namespace std;
    
int change(int a, int b){
    return a^b;
}

int main()
{
    cout << change(2,1);
    return 0;
}