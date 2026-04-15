#include <iostream>
using namespace std;

int main() {

    int n = 6 ; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= (2*n) - 1; j++)
        {
            
            if (j == n-i || j == n+i)
                cout << "*";
            else
                cout << " ";       
       
        }
        
        cout << endl ; 
    }
    
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 1; j <= (2*n) - 1; j++)
        {
            if (j == n-i || j == n+i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl ;
    }
    
    return 0;
}