//traingle pyramid
#include <iostream>
using namespace std;
    
int main()
{
    for (int i = 1; i <= 5; i++)
    {   
        for (int j = 5; j > 0; j--)
        {
            if (j <= i)
            {
            cout << "* ";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl ;
    }
    for (int i = 1; i <= 4; i++)
    {   
        for (int j = 0; j <= 4; j++)
        {
            if (j >= i)
            {
            cout << "* ";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl ;
        
    }
    
    return 0;
}