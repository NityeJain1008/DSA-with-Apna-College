#include <iostream>
using namespace std;

int main()
{

    int n = 45;

    // IF ELSE
    if (n >= 0)
    {
        cout << "N is positive " << endl;
    }
    else
    {
        cout << "N is negative " << endl;
    }

    int age;

    cout << "Enter your age :" << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote" << endl;
    }
    else
    {
        cout << "You cannot vote";
    }

    // IF - ELSE IF - ELSE

    int marks;
    cout << "Enter marks :" << endl;
    cin >> marks;

    if (marks <= 100 && marks > 90)
    {
        cout << "Grade A" << endl;
    }else if (marks <= 90 && marks > 80)
    {
        cout << "Grade B" << endl;
    }
    else
    {
        cout << "Grade C" << endl;
    }

    // Ternary Statement 

    int n = 34 ; 
    cout << (n >= 0 ? "Positive" : "Negative") << endl ;
    
    
    return 0;
}