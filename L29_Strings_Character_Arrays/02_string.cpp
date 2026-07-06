#include <iostream>
#include <string> 
using namespace std;

int main() {

    string str = "hello" ; 

    // combine 
    string str1 = "hello" ; 
    string str2 = "world" ; 

    string str3 = str1 + str2 ; 

    //Compare
    cout << (str1 == str2) ; 

    cout << str1.length() ; 

    // Homework Question
    string str4 = "racecar" ; 

    string str5 = str4 ; 

    reverse(str5.begin(), str5.end()) ; 

    if(str5 == str4){
        cout << "palindrome" ; 
    }


    return 0;
}