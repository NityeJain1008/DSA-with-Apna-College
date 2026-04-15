#include <iostream>
using namespace std;

int main() {

    // AND OPERATOR
    int a , b ; 
    cout << "Enter the number a :" << endl ; 
    cin >> a ; 

    cout << "Enter the number b :" << endl ;
    cin >> b ; 

    cout << "The & of numbers is :" << (a&b) << endl ; 

    // OR OPERATOR
    int c , d ; 
    cout << "Enter the number a :" << endl ; 
    cin >> c ; 

    cout << "Enter the number b :" << endl ;
    cin >> d ; 

    cout << "The |(OR) of numbers is :" << (c|d) << endl ;

    // XOR OPERATOR
    int e , f ; 
    cout << "Enter the number a :" << endl ; 
    cin >> e ; 

    cout << "Enter the number b :" << endl ;
    cin >> f ; 

    cout << "The ^(XOR) of numbers is :" << (e^f) << endl ;

    // LEft Shift Operator 
    int g , h ; 
    cout << "Enter the number a :" << endl ; 
    cin >> g ; 

    cout << "Enter the number of times to be shifted :" << endl ;
    cin >> h ; 

    cout << "The <<(LEFT SHIFT) of numbers is :" << (g << h) << endl ;
    
    // Right Shift Operator 
    int i , j ; 
    cout << "Enter the number a :" << endl ; 
    cin >> i ; 

    cout << "Enter the number of times to be shifted :" << endl ;
    cin >> j ; 

    cout << "The >>(Right Shift) of numbers is :" << (i >> j) << endl ;
    return 0;

}
