#include <iostream>
using namespace std;

int main() {

    // FOR NUMBERS : 

    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ;
    
    int a = 1 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a << " " ; 
            a = a + 1 ; 
        }
        cout << endl ; 
    }

    // FOR CHARACTERS : 
    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ;
    
    char ch = 'A' ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " " ; 
            ch = ch + 1 ; 
        }
        cout << endl ; 
    }

    // STAR PATTERN : 

    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i; j++)
        {
            cout << "* " ;  
        }
        cout << endl ; 
    }
    return 0;
}