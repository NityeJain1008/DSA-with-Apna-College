#include <iostream>
using namespace std;

int main() {

    int marks[5] ; 

    for (int i = 0; i < 5; i++)
    { 
        cout << "Enter the value of marks" << i << endl; 
        cin >> marks[i] ; 
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl ; 
    }
    
    return 0;
}