#include <iostream>
using namespace std;
    struct students
    {
        int Rollno;
        char Name[20];
        char Course[20];
    };
    students s1; 
    
int main()
{
    int n;
    cout << "How many Record you want to add:- ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Rollno:- ";
        cin >> s1.Rollno;
        cout << "Enter the Name:- ";
        cin >> s1.Name;
        cout << "Enter the Course:- ";
        cin >> s1.Course;
    }
    
    return 0;
}