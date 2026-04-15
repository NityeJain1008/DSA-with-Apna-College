#include <iostream>
using namespace std;

int main() {

    int marks[5] ; 
    
    for (int i = 0; i < 5; i++)
    { 
        cout << "Enter the value of marks" << i << endl; 
        cin >> marks[i] ; 
    }

    int largest = INT_MIN ; 

    for (int i = 0; i < 5; i++)
    {  
        if (marks[i] > largest)
        {
            largest = marks[i] ;
        } 
    }

    int smallest = marks[0] ; 

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i] ; 
        }
        
    }
    
    cout << "The largest no. is :" <<  largest << endl ; 
    cout << "The smallest no. is :" <<  smallest << endl ; 
    
    return 0;
}
