#include <iostream>
using namespace std;

int main() {

    int n ; 

    cout << "Enter the no. :" << endl ; 
    cin >> n ; 

    int count = 1;

    while (count <= n)
    {
        cout << count << endl ; 
        count ++ ; 
    }

    return 0;
}