#include <iostream>
using namespace std;

int stock(vector <int> &vec){

    int ans = INT_MIN ; 
    int n = vec.size() ; 

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            ans = max(ans , vec[j] - vec[i]) ; 
        }
    }
    
    return ans ; 
}

int main() {

    vector <int> vec = {7,1,5,3,6,4} ; 
    cout << stock(vec) ;

    return 0;
}