#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
    // Declarations
    pair<int, string> p1 = {101, "Alice"};
    pair<int, string> p2 = make_pair(102, "Bob");

    // Extracting data
    cout << "ID: " << p1.first << ", Name: " << p1.second << endl;

    // Complex / Nested pairs
    pair<int, pair<int, int>> coordinates = {1, {10, 20}};
    cout << "X coordinate: " << coordinates.second.first << endl;

    // Emplace Vs push

    vector<pair<int, string>> vec;

    // push_back requires explicit structural wrapping
    vec.push_back({1, "Test"}); 

    // emplace_back accepts raw arguments to create the object natively inside memory
    vec.emplace_back(2, "Optimized");

    return 0;
}