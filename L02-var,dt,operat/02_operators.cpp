#include <iostream>
using namespace std;

int main() {

    int a, b, c ;
   
    cout << "Enter first value :" << endl ; 
    cin >> a ;

    cout << "Enter the second no." << endl ; 
    cin >> b ; 

    // ARITMETIC OPERATOR
    cout << "The sum is " << a+b << endl ;
    cout << "The subtraction is :" << a-b << endl ; 
    cout << "The product is :" << a*b << endl ; 
    cout << "The division is :" << a/b << endl ; 
    
    // RELATIONAL OPERATORS
    cout << (3>4) << endl ; // false --> 0 
    cout << (3<4) << endl ; // true --> 1

    // LOGICAL OPERATORS
    cout << ((3<4) || (5>6)) << endl ; // if any one true we get true 
    cout << !(3<4) << endl ; // true --> False
    cout << ((3<4) && (5>6)) << endl ; // if both true we get true 
    




    return 0;
}