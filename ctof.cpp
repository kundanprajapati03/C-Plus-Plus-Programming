#include <iostream>
using namespace std;

int celsius(float c){
    float result = (c * 9 / 5) + 32;
    return result;
}
int main(){
    float c;
    cout << "Enter the Celsius:- ";
    cin >> c;
    cout << celsius(c) ;
}