#include <iostream>
using namespace std;

void chageval(int &a){
    a = 2 * a ; 
}

int main() {

    int x = 20 ; 
    chageval(x) ; 

    cout << x << endl ; 
 
    return 0;
}