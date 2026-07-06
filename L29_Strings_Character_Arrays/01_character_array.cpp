#include <iostream>
using namespace std;

int main() {

    char str[] = "Hello" ; 
    char str1[] = {'a', 'b', 'c', '\0'} ; 

    cout << str << endl ; 
    cout << str1 << endl ; 

    char str2[50] ; 

    cout << "Enter the String :" ; 
    cin.getline(str2, 50) ; 

    cout << "The str2 is : " << str2 ; 

    

    return 0;
}