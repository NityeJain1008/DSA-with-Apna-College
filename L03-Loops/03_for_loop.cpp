#include <iostream>
using namespace std;

int main() {

    // int n ; 
    // cout << "Write the no. :"  ; 
    // cin >> n ;
    
    // for (int i = 1; i < n+1; i++)
    // {
    //     cout << i << endl ; 
    // }
    
    // SUM OF N NUMBERS

    int n ; 
    cout << "Enter the no. :" << endl ; 
    cin >> n ; 

    int sum = 0 ; 

    for (int i = 0; i < n+1; i++)
    {
        sum = sum + i ;
    }
    cout << "The sum is :" << sum << endl ; 


    return 0;
}