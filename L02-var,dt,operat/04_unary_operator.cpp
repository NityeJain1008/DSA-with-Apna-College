#include <iostream>
using namespace std;

int main(){

    int x = 3;

    int y = x++;
    cout << y << endl;

    int a = ++x;
    cout << a << endl;

    int b = x--;
    cout << b << endl;

    int c = --x;
    cout << c << endl;

    cout << x << endl;

    return 0;
}