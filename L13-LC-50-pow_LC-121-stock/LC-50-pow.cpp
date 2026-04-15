#include <iostream>
using namespace std;

double myPow(double x, int n)
{

    long binform = n;

    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    }

    double ans = 1;

    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        binform = binform / 2;
    }
    return ans;
}

int main()
{
    double a = 3 ; 
    int n = 2 ; 
    cout << myPow(3, 2) ; 

    return 0;
}