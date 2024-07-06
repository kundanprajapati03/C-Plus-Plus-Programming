#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int sum = 0;
    for (int i = 0; i <= n; i += 2)
    {
     sum = sum + i;
    }
    cout <<" The sum of Even number 0 to " << n <<" :- " << sum ; 
}