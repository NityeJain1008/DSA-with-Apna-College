#include <iostream>
using namespace std;

int sumdigit(int n){
    
    int digsum = 0 ;

    while (n > 0)
    {
        int lastno = n % 10 ; 
        n = n / 10 ; 

        digsum = digsum + lastno ;
    }
    
    return digsum ; 
}

int main() {

    cout << sumdigit(1234) << endl ; 

    return 0;
}