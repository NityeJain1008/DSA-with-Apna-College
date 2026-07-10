#include <iostream>
using namespace std;

long long a = 1234567890123;
long long b = 9876543210123;
long long m = 1e9 + 7;

long long add_res = ((a % m) + (b % m)) % m;
long long sub_res = ((a % m) - (b % m) + m) % m;
long long mul_res = ((a % m) * (b % m)) % m;

int main()
{

    return 0;
}