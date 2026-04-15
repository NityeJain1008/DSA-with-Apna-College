#include <iostream>
using namespace std;

int bintodec(int num){
    int ans = 0 ; 
    int pow = 1 ; 

    while (num > 0)
    {
        int rem = num % 10 ; 
        num = num / 10 ; 

        ans = ans + (rem*pow) ; 
        pow = pow * 2 ;
    }
    cout << "The number is :" << ans << endl ; 
    return 0 ; 
}

int main() {

    int n ; 
    cout << "Enter number :" << endl ; 
    cin >> n ; 

    bintodec(n) ;  

    return 0;
 
}