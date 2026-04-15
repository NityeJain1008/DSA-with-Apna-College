#include <iostream>
using namespace std;

int main() {

    int n ; 
    cout << "Enter the no." << endl ; 
    cin >> n ; 

    bool isprime = true ; 

    for (int i = 2; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            isprime = false ;  
        }
    }
    
    if (isprime)
    {
        cout << "The no. is prime" ; 
    }else
    {
        cout << "The no. is not prime " ; 
    }
    
    

    return 0;
}