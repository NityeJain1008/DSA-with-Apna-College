#include <iostream>
using namespace std;

void greating(){
    cout << "Hello" ; 
}

int sum2(int a , int b){
    int s = a + b ; 
    cout << "The sum of numbers is :" << s ; 
    return 0 ; 
}

int min(int a, int b){
    if (a > b){
        cout << "The smaller no. is :" << b ; 
    }else
        cout << "The smaller no. is :" << a ; 
    return 0 ;  
}

int sum = 0 ; 
int sumofn(int n){
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i ;
    }
    cout << "The sum of numbers is :" << sum ;
    return 0 ;
}

int fact = 1 ;
int factorial(int n){
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i ; 
    }
    cout << "The factorial is :" << fact ; 
    return 0 ; 
}

int main() {

    greating() ; cout << endl ; 
    sum2(20,56) ; cout << endl ; 
    min(5,4) ; cout << endl ; 
    sumofn(10) ; cout << endl ; 
    factorial(5) ; cout << endl ; 
    return 0;
}
