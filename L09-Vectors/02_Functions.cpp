#include <iostream>
using namespace std;

int main() {

    vector <int> vec = {1, 2, 3, 4} ; 

    // SIZE 
    cout << "Size = " << vec.size() << endl ; 

    // PUSH_BACK
    vec.push_back(5) ; 
    
    for(int val : vec){
        cout << val << endl ; 
    }

    // POP_BACK
    vec.pop_back() ; 

    // FRONT
    cout << vec.front() << endl ; 

    // BACK
    cout << vec.back() << endl ; 

    // AT 
    cout << vec.at(0) << endl ; 

    
    return 0;
}