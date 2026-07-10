#include <iostream>
using namespace std;

int getGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int getLCM(int a, int b) {
    return (a * b) / getGCD(a, b);
}


int main() {

    

    return 0;
}