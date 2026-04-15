#include <iostream>
using namespace std;

int main() {

    // FOR NUMBERS : 
    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ;
    
    int num = 1 ; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " " ;  
        }
        num = num + 1  ; 
        cout << endl ;
    }
    
    // FOR CHARACTERS : 

    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ;
    
    char ch = 'A' ; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " " ;  
        }
        ch = ch + 1  ; 
        cout << endl ;
    }

    return 0;
}
