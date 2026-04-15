#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3} ; 
    vector <char> vec1 = {'a', 'b', 'c', 'd'} ; 

    // cout << vec[0] << endl ; 
    // cout << vec[1] << endl ; 
    // cout << vec[2] << endl ; 
    
    for(int i : vec){
        cout << i << endl ; 
    }

    for(char val :vec1){
        cout << val << endl ; 
    }

    return 0;
}
