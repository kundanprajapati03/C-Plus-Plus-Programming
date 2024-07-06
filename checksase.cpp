#include <iostream>
using namespace std;
int main(){
    Repeat:
    int n ;
    cout << "Enter the value :- ";
    cin >> n ;

    if (n >= 'a' && n <= 'z')
    {
        cout << "You enter a Lowercash value " << endl;
    }
    else if (n >= 'A' && n <= 'Z')
    {
        cout << "You enter a Uppercash value " << endl;
    }
    else if (n >= 0 && n <= 9){
        cout << "Numeric Value" << endl;
    }
    else{
        cout << "Please Enter a valid Key."<< endl;
    }
    
    int i;
    cout << "Enter Y for Repeate this code:-";
    cin >> i;
    if (i == 'Y' || i == 'y')
    {
        goto Repeat;   
    }
    
}