#include <iostream>
using namespace std;

int dectobin(int decnum){
    int ans = 0 ; 
    int pow = 1 ; 
    while (decnum > 0)
    {
        int rem = decnum % 2 ; 
        decnum = decnum / 2 ; 

        ans = ans + (rem*pow) ;
        pow = pow * 10 ; 
    }
    cout << "The binary number is :" << ans ; 
    return 0 ; 
}

int main() {
    
    int n ; 
    cout << "Enter the number :" << endl ; 
    cin >> n ; 

    dectobin(4) ; 

    return 0;
}