#include <iostream>
using namespace std;

int main() {

    // FOR NUMBERS :
    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " " ; 
        }
        cout << endl ; 
    }
    
    // FOR STARS :
    int k ; 
    cout << "Enter the no." << endl ; 
    cin >> k ;
    
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << "* " ; 
        }
        cout << endl ; 
    }

    // FOR CHARACTERS : 
    int l ; 
    cout << "Enter the no." << endl ; 
    cin >> l ;
    
    for (int i = 1; i <= l; i++)
    {
        char ch = 'A' ; 
        for (int j = 1; j <= l; j++)
        {
            cout << ch ;
            ch = ch + 1 ; 
        }
        cout << endl ; 
    }


    return 0;
}