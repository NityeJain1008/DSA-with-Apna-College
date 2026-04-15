#include <iostream>
using namespace std;

int main() {

    int a = 10 ; 
    int* ptr = &a ; 
    int** ptr2 = &ptr ; 

    // Value of a 
    cout << *(&a) << endl ; 
    cout << *ptr << endl ; 
    cout << **ptr2 << endl ; 

    // Value of ptr or address of a 
    cout << &a << endl ; 
    cout << *(&ptr) << endl ; 
    cout << *ptr2 << endl ; 

    // Value of ptr2 or address of ptr 
    cout << &ptr << endl ; 
    cout << *(&ptr2) << endl ; 

    return 0;
}