#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i ; 
        }
    } 
    return 0 ; 
}

int main() {

    int arr[] = {4, 2, 7, 8, 1, 2, 5} ; 
     
    cout << linearsearch(arr, 7, 5) << endl ; 
    
    return 0;
}